Userspace eBPF Library
======================

This is a modified port of the Berkeley Packet Filter (BPF) infrastructure from 
the Linux kernel to the userspace as a shared library. The goal of this library is 
pure experimentation and performance analysis **only** for tracing tools.
Before using the library, please make sure your use-case allows GPLv2 licenses.

Building
--------
This library used CMake build system. Make sure you have `cmake` version > 2.8 
installed on your system. This can usually be done on Fedora by a simple,

    $ dnf install cmake
       
Proceed to your `build` directory and then,

    $ cd build
    $ cmake ../
    $ make
