Using LLVM BPF Backend
----------------------

Even though the LLVM BPF backend has been merged in LLVM, an implementation provided in ../tools directory 
of the LLVM eBPF backend can still be used to generate the BPF bytecode from the C-like filter expressions

For example to generate the filter binary,

    $ clang -O2 -I../ -emit-llvm -c filter.c
    $ ../tools/llvm_bpf/bld/Debug+Asserts/bin/llc filter.bc -o filter.bpf

You can also generate assembly to see BPF instructions
    $ ../tools/llvm_bpf/bld/Debug+Asserts/bin/llc filter.bc -filetype=asm -o filter.S
