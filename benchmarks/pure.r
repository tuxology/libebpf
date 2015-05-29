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
raw100K <- read.tcsv(file.path(getwd(), "results/pure-100000.dat"), stringsAsFactors=FALSE, header = FALSE)
raw500K <- read.tcsv(file.path(getwd(), "results/pure-500000.dat"), stringsAsFactors=FALSE, header = FALSE)
raw1M <- read.tcsv(file.path(getwd(), "results/pure-1000000.dat"), stringsAsFactors=FALSE, header = FALSE)

library(ggplot2)
library(reshape2)

# Extract data for 100K
simple100K <- as.numeric(c(raw100K$V1[2:21]))
simple100K <- mean(simple100K)

ebpfjit100K <- as.numeric(c(raw100K$V2[2:21]))
ebpfjit100K <- mean(ebpfjit100K)

ebpf100K <- as.numeric(c(raw100K$V3[2:21]))
ebpf100K <- mean(ebpf100K)

# Extract data for 500K
simple500K <- as.numeric(c(raw500K$V1[2:21]))
simple500K <- mean(simple500K)

ebpfjit500K <- as.numeric(c(raw500K$V2[2:21]))
ebpfjit500K <- mean(ebpfjit500K)

ebpf500K <- as.numeric(c(raw500K$V3[2:21]))
ebpf500K <- mean(ebpf500K)

# Extract data for 1M
simple1M <- as.numeric(c(raw1M$V1[2:21]))
simple1M <- mean(simple1M)

ebpfjit1M <- as.numeric(c(raw1M$V2[2:21]))
ebpfjit1M <- mean(ebpfjit1M)

ebpf1M <- as.numeric(c(raw1M$V3[2:21]))
ebpf1M <- mean(ebpf1M)

# Calculate per filter run value based on 1M runs data
per_event_simple_ns <- (simple1M/1000000)*10e8
per_event_ebpfjit_ns <- (ebpfjit1M/1000000)*10e8
per_event_ebpf_ns <- (ebpf1M/1000000)*10e8

# Calculate overhead
ebpf_overhead <- per_event_ebpf_ns/per_event_simple_ns
ebpfjit_overhead <- per_event_ebpfjit_ns/per_event_simple_ns
jit_vs_interpreted <- per_event_ebpf_ns/per_event_ebpfjit_ns
cat(sprintf("Interpreted eBPF is %.2f times slower than hardcoded filter\n", ebpf_overhead))
cat(sprintf("JITed eBPF is %.2f times slower than hardcoded filter\n", ebpfjit_overhead))
cat(sprintf("JITed eBPF is %.2f times faster than interpreted eBPF filter\n", jit_vs_interpreted))


# Prepare merged dataset
type <- c("eBPF", "eBPF_JIT", "Hardcoded")
hundredK <- c(simple100K, ebpfjit100K, ebpf100K)
fivehundredK <- c(simple500K, ebpfjit500K, ebpf500K)
oneM <- c(simple1M, ebpfjit1M, ebpf1M)
d <- data.frame(type, hundredK, fivehundredK, oneM)

dataset=melt(d, id.vars = c("type"),
             measure.vars=c("hundredK", "fivehundredK", "oneM")
             )

# Change names of variable
levels(dataset$variable)[levels(dataset$variable)=="hundredK"] <- "100K"
levels(dataset$variable)[levels(dataset$variable)=="fivehundredK"] <- "500K"
levels(dataset$variable)[levels(dataset$variable)=="oneM"] <- "1M"

# Reorder 
dataset <- dataset[ order(dataset$type, dataset$variable), ]

# Reorder type column
dataset$type <- as.factor(dataset$type)
levels(dataset$type) <- rev(levels(dataset$type))

ggplot(dataset, aes(x=variable, y=value, fill=type)) + 
  #geom_bar(colour="#333333", stat="identity", position="dodge") +
  geom_bar(stat="identity", position="dodge") +
  ggtitle(expression(atop("Pure filter execution overhead", atop(italic("50 predicates (strcmp), all TRUE"))))) +
  xlab("Execution Loops") +
  ylab("Time(ns)") +
  theme(axis.title.x = element_text(face="bold", size=14, vjust=-0.5, colour="grey34"),
        axis.text.x  = element_text(size=12),
        axis.title.y = element_text(face="bold", size=14, vjust=1, colour="grey34"),
        axis.text.y  = element_text(size=12)) +
  theme(plot.title = element_text(lineheight=1, size = 18, face="bold", vjust=1, colour="grey34")) +
  theme(legend.title = element_blank(),
        legend.text = element_text(colour="grey34", size = 14)
  ) +
  #      legend.position = "bottom") +
  #scale_colour_brewer(breaks=c("eBPF", "eBPF_JIT", "Simple"),
  #                      labels=c("eBPF", "eBPF+JIT", "Simple"), palette="Set1") +
  scale_colour_brewer(breaks=c("Hardcoded", "eBPF_JIT", "eBPF"),
                    labels=c("Hardcoded", "eBPF+JIT", "eBPF"), palette="Set1") +
  #scale_fill_brewer(breaks=c("eBPF", "eBPF_JIT", "Simple"),
  #                    labels=c("eBPF", "eBPF+JIT", "Simple"), palette="Set1")
  scale_fill_brewer(breaks=c("Hardcoded", "eBPF_JIT", "eBPF"),
                        labels=c("Hardcoded", "eBPF+JIT", "eBPF"), palette="Set1")