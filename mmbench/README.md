Using LLVM BPF Backend
----------------------

The llvm_bpf backend at tools/lib_bpf/lib/Target/BPF/ can be used to generate the BPF bytecode from the C-like filter expressions

For example,
```
clang -O2 -I../ -emit-llvm -c filter.c
../tools/llvm_bpf/bld/Debug+Asserts/bin/llc filter.bc -o filter.bpf
../tools/llvm_bpf/bld/Debug+Asserts/bin/llc filter.bc -filetype=asm -o filter.S
```

