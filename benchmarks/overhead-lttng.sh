#!/bin/bash

export NR_RUNS=10000000
NR_TIMES=10
RESULT_FILE="./results/lttng-$NR_RUNS.dat"
rm $RESULT_FILE
touch $RESULT_FILE
#echo -e "SIMPLE\tBPF+JIT\tBPF\n" > $RESULT_FILE

echo "============================================"
echo "Benchmaking eBPF vs LTTng filter performance"
echo "============================================"
echo "Number of runs : $NR_RUNS"
echo

# discard first run
./retlif-lttng CLEAN > /dev/null 2>&1
clean="LTTNG,"

lttng create
lttng enable-event -u retlif_tp:tpfilt --filter '(var0 == "str0") && (var1 == "str1") && (var2 == "str2") && (var3 == "str3") && (var4 == "str4") && (var5 == "str5") && (var6 == "str6") && (var7 == "str7") && (var8 == "str8") &&  (lyf == 42)'
lttng start
for i in `seq 1 $NR_TIMES`;
do
    clean=$clean$(./retlif-lttng CLEAN | head -n 1)","
done
lttng stop
#lttng view
lttng destroy

echo -e $clean | tee -a $RESULT_FILE

echo "============================================"
# discard first run
./retlif-lttng CLEAN > /dev/null 2>&1
clean="LTTNG-FALSE,"

lttng create
lttng enable-event -u retlif_tp:tpfilt --filter '(var0 == "str0") && (var1 == "str1") && (var2 == "str2") && (var3 == "str3") && (var4 == "str4") && (var5 == "str5") && (var6 == "str6") && (var7 == "str7") && (var8 == "str8") &&  (lyf == 43)'
lttng start
for i in `seq 1 $NR_TIMES`;
do
    clean=$clean$(./retlif-lttng CLEAN | head -n 1)","
done
lttng stop
#lttng view
lttng destroy

echo -e $clean | tee -a $RESULT_FILE

echo "============================================"
# discard first run
./retlif-lttng CLEAN > /dev/null 2>&1
clean_filt="LTTNG-NOFILT,"

lttng create
lttng enable-event -u retlif_tp:tpfilt
lttng start
for i in `seq 1 $NR_TIMES`;
do
    clean_filt=$clean_filt$(./retlif-lttng CLEAN | head -n 1)","
done
lttng stop
#lttng view
lttng destroy

echo -e $clean_filt | tee -a $RESULT_FILE

echo "============================================"
# discard first run
BPF_JIT=1 ./retlif-lttng BPF > /dev/null 2>&1
bpfjit="BPF+JIT,"

lttng create
lttng enable-event -u retlif_tp:tpfilt
lttng start
for i in `seq 1 $NR_TIMES`;
do
    bpfjit=$bpfjit$(BPF_JIT=1 ./retlif-lttng BPF | tail -1)","
done
lttng stop
#lttng view
lttng destroy

echo -e $bpfjit | tee -a $RESULT_FILE

echo "============================================"
# discard first run
BPF_JIT=0 ./retlif-lttng BPF > /dev/null 2>&1
bpf="BPF,"

lttng create
lttng enable-event -u retlif_tp:tpfilt
lttng start
for i in `seq 1 $NR_TIMES`;
do
    bpf=$bpf$(BPF_JIT=0 ./retlif-lttng BPF | tail -1)","
done
lttng stop
#lttng view
lttng destroy

echo -e $bpf | tee -a $RESULT_FILE

echo "============================================"
# discard first run
BPF_JIT=1 ./retlif-lttng BPFFALSE > /dev/null 2>&1
bpfjitfalse="BPF-JIT-FLASE,"

for i in `seq 1 $NR_TIMES`;
do
    bpfjitfalse=$bpfjitfalse$(BPF_JIT=1 ./retlif-lttng BPFFALSE | tail -1)","
done

echo -e $bpfjitfalse | tee -a $RESULT_FILE

echo "============================================"
# discard first run
BPF_JIT=0 ./retlif-lttng BPFFALSE > /dev/null 2>&1
bpffalse="BPF-FLASE,"

for i in `seq 1 $NR_TIMES`;
do
    bpffalse=$bpffalse$(BPF_JIT=0 ./retlif-lttng BPFFALSE | tail -1)","
done

echo -e $bpffalse | tee -a $RESULT_FILE
echo
echo "----------------DONE----------------"
echo