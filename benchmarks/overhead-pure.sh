#!/bin/bash

export NR_RUNS=1000000
NR_TIMES=20
RESULT_FILE="./results/pure-$NR_RUNS.dat"
rm $RESULT_FILE
touch $RESULT_FILE
#echo -e "SIMPLE\tBPF+JIT\tBPF\n" > $RESULT_FILE

echo "==================================="
echo "Benchmaking pure filter performance"
echo "==================================="
echo "Number of runs : $NR_RUNS"
echo
# discard first run
./retlif SIMPLE > /dev/null 2>&1
simple="SIMPLE,"
for i in `seq 1 $NR_TIMES`;
do
    simple=$simple$(./retlif SIMPLE | head -n 1)","
done
echo -e $simple | tee -a $RESULT_FILE

# discard first run
BPF_JIT=1 ./retlif BPF > /dev/null 2>&1
bpfjit="BPF+JIT,"
for i in `seq 1 $NR_TIMES`;
do
    bpfjit=$bpfjit$(BPF_JIT=1 ./retlif BPF | head -n 1)","
done
echo -e $bpfjit | tee -a $RESULT_FILE

# discard first run
BPF_JIT=0 ./retlif BPF > /dev/null 2>&1
bpf="BPF,"
for i in `seq 1 $NR_TIMES`;
do
    bpf=$bpf$(BPF_JIT=0 ./retlif BPF | head -n 1)","
done
echo -e $bpf | tee -a $RESULT_FILE
echo
echo "----------------DONE----------------"
echo
