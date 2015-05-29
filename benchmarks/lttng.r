read.tcsv = function(file, header=TRUE, sep=",", ...) {
  
  n = max(count.fields(file, sep=","), na.rm=TRUE)
  x = readLines(file)
  
  .splitvar = function(x, sep, n) {
    var = unlist(strsplit(x, split=sep))
    length(var) = n
    return(var)
  }
  
  x = do.call(cbind, lapply(x, .splitvar, sep=sep, n=n))
  x = apply(x, 1, paste, collapse=sep) 
  out = read.csv(text=x, sep=sep, header=header, ...)
  return(out)
  
}

setwd('/home/suchakra/Projects/repos/libebpf/benchmarks')
raw1M <- read.tcsv(file.path(getwd(), "results/lttng-1000000.dat"), stringsAsFactors=FALSE, header = FALSE)
raw10M <- read.tcsv(file.path(getwd(), "results/lttng-10000000.dat"), stringsAsFactors=FALSE, header = FALSE)

library(ggplot2)
library(reshape2)

# Extract data for 1M
lttng1M <- as.numeric(c(raw1M$V1[2:11]))
lttng1M <- mean(lttng1M)

lttng_nofilt1M <- as.numeric(c(raw1M$V3[2:11]))
lttng_nofilt1M <- mean(lttng_nofilt1M)

ebpfjit1M <- as.numeric(c(raw1M$V4[2:11]))
ebpfjit1M <- mean(ebpfjit1M)

ebpf1M <- as.numeric(c(raw1M$V5[2:11]))
ebpf1M <- mean(ebpf1M)

ebpffalse1M <- as.numeric(c(raw1M$V6[2:11]))
ebpffalse1M <- mean(ebpffalse1M)

# Extract data for 10M
lttng10M <- as.numeric(c(raw10M$V1[2:11]))
lttng10M <- mean(lttng10M)

lttng_false10M <- as.numeric(c(raw10M$V2[2:11]))
lttng_false10M <- mean(lttng_false10M)

lttng_nofilt10M <- as.numeric(c(raw10M$V3[2:11]))
lttng_nofilt10M <- mean(lttng_nofilt10M)

ebpfjit10M <- as.numeric(c(raw10M$V4[2:11]))
ebpfjit10M <- mean(ebpfjit10M)

ebpf10M <- as.numeric(c(raw10M$V5[2:11]))
ebpf10M <- mean(ebpf10M)

ebpfjitfalse10M <- as.numeric(c(raw10M$V6[2:11]))
ebpfjitfalse10M <- mean(ebpfjitfalse10M)

ebpffalse10M <- as.numeric(c(raw10M$V7[2:11]))
ebpffalse10M <- mean(ebpffalse10M)

# Calculate per filter run value based on 10M runs data
per_event_lttng_ns <- (lttng10M/10000000)*10e8
per_event_lttng_nofilt_ns <- (lttng_nofilt10M/10000000)*10e8
per_event_ebpfjit_ns <- (ebpfjit10M/10000000)*10e8
per_event_ebpf_ns <- (ebpf10M/10000000)*10e8
per_event_ebpfjitfalse_ns <- (ebpfjitfalse10M/10000000)*10e8
per_event_lttngfalse_ns <- (lttng_false10M/10000000)*10e8
per_event_ebpffalse_ns <- (ebpffalse10M/10000000)*10e8


# Calculate overhead
ebpf_overhead <- per_event_ebpf_ns/per_event_lttng_nofilt_ns
ebpfjit_overhead <- per_event_ebpfjit_ns/per_event_lttng_nofilt_ns
lttng_filter_overhead <- per_event_lttng_ns/per_event_lttng_nofilt_ns
jit_vs_interpreted <- per_event_ebpf_ns/per_event_ebpfjit_ns
jit_vs_lttng <- per_event_lttng_ns/per_event_ebpfjit_ns
ebpfjittrue_vs_ebpfjitfalse <- per_event_ebpfjit_ns/per_event_ebpffalse_ns
lttngtrue_vs_ebpfjitfalse <- per_event_lttng_nofilt_ns/per_event_ebpffalse_ns

cat(sprintf("Interpreted eBPF filter is %.2f times slower than LTTng non-filtered\n", ebpf_overhead))
cat(sprintf("JITed eBPF filter is %.2f times slower than LTTng non-filtered\n", ebpfjit_overhead))
cat(sprintf("JITed eBPF filter is %.2f times faster than LTTng filter\n", jit_vs_lttng))
cat(sprintf("JITed eBPF filter is %.2f times faster than interpreted eBPF filter\n", jit_vs_interpreted))
cat(sprintf("LTTng filtered is %.2f times slower than LTTng non-filtered\n\n", lttng_filter_overhead))
cat(sprintf("JITed eBPF all FALSE is %.2f times faster than JITed eBPF all TRUE\n", ebpfjittrue_vs_ebpfjitfalse))
cat(sprintf("JITed eBPF all FALSE is %.2f times faster than LTTng all events recorded\n", lttngtrue_vs_ebpfjitfalse))


# Prepare merged dataset
type <- c("eBPF+True", "eBPF+False", "eBPF+JIT+False", "eBPF+JIT+True", "LTTng+True", "LTTng+Nofilt", "LTTng+False")
oneM <- c(ebpf1M, ebpffalse1M, ebpfjit1M, lttng1M, lttng_nofilt1M )
tenM <- c(ebpf10M, ebpffalse10M, ebpfjitfalse10M, ebpfjit10M, lttng10M, lttng_nofilt10M, lttng_false10M)
#oneM <- c(lttng1M, lttng_nofilt1M, ebpfjit1M, ebpf1M, ebpffalse1M)
#tenM <- c(lttng10M, lttng_nofilt10M, ebpfjit10M, ebpf10M, ebpffalse10M)
d <- data.frame(type, tenM)

dataset=melt(d, id.vars = c("type"),
             measure.vars=c("tenM")
             )

# Change names of variable
levels(dataset$variable)[levels(dataset$variable)=="oneM"] <- "1M"
levels(dataset$variable)[levels(dataset$variable)=="tenM"] <- "10M"

# Reorder 
#dataset <- dataset[ order(dataset$variable, dataset$type), ]

# Reorder type column
#dataset$type <- as.factor(dataset$type)
#levels(dataset$type) <- rev(levels(dataset$type))

ggplot(dataset, aes(x=variable, y=value, fill=type)) + 
  #geom_bar(colour="#333333", stat="identity", position="dodge") +
  geom_bar(stat="identity", position="dodge") +
  ggtitle(expression(atop("Filtered Tracepoint Overhead", atop(italic("10 predicates"))))) +
  xlab("Execution Loops") +
  ylab("Time(ns)") +
  theme(axis.title.x = element_text(face="bold", size=14, vjust=-0.5, colour="grey34"),
        axis.text.x  = element_text(size=12),
        axis.title.y = element_text(face="bold", size=14, vjust=1, colour="grey34"),
        axis.text.y  = element_text(size=12)) +
  theme(plot.title = element_text(lineheight=1, size = 18, face="bold", vjust=1, colour="grey34")) +
  theme(legend.title = element_blank(),
        legend.text = element_text(colour="grey34", size = 14)
  )  +
  #scale_fill_grey()
  #scale_colour_brewer(palette="Set1") +
  scale_fill_brewer(palette="YlGnBu")
  #scale_colour_brewer(breaks=c("LTTng", "LTTng_Nofilt", "eBPF_JIT", "eBPF", "eBPFflase"),
  #                  labels=c("LTTng", "LTTng+Nofilt", "eBPF+JIT", "eBPF", "eBPF+FALSE"), palette="Set1") +
  #scale_fill_brewer(breaks=c("LTTng", "LTTng_Nofilt", "eBPF_JIT", "eBPF", "eBPFflase"),
  #                      labels=c("LTTng", "LTTng+Nofilt", "eBPF+JIT", "eBPF", "eBPF+FALSE"), palette="Set1")
