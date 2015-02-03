#!/bin/bash

NR_STR=50

echo "Generating Filters..."
echo
python generator.py filter.c.tpl filter.c $NR_STR
python generator.py filter.h.tpl filter.h $NR_STR
python generator.py retlif.c.tpl retlif.c $NR_STR

echo "Building Filter..."
echo
clang -O2 -I../ -emit-llvm -c filter.c > /dev/null 2>&1
../tools/llvm_bpf/bld/Debug+Asserts/bin/llc filter.bc -o filter.bpf > /dev/null 2>&1

echo "Building Retlif..."
echo
make > /dev/null 2>&1
echo "...done!"
