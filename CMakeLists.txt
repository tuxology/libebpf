cmake_minimum_required(VERSION 2.8)
project(libebpf)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${libebpf_SOURCE_DIR}/include)

set(HEADER_FILES
    include/uapi/bpf.h
    include/uapi/bpf_common.h
    include/uapi/filter.h
    include/atomic.h
    include/bpf.h
    include/bpf_trace.h
    include/filter.h
)

set(SOURCE_FILES
    src/jit.c
    src/core.c
)

add_library(ebpf SHARED ${SOURCE_FILES} ${HEADER_FILES})