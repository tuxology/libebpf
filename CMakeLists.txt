cmake_minimum_required(VERSION 2.8)
project(libebpf)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${libebpf_SOURCE_DIR}/include)

set(HEADER_FILES
    ${PROJECT_SOURCE_DIR}/include/uapi/bpf.h
    ${PROJECT_SOURCE_DIR}/include/uapi/bpf_common.h
    ${PROJECT_SOURCE_DIR}/include/uapi/filter.h
    ${PROJECT_SOURCE_DIR}/include/atomic.h
    ${PROJECT_SOURCE_DIR}/include/bpf.h
    ${PROJECT_SOURCE_DIR}/include/bpf_trace.h
    ${PROJECT_SOURCE_DIR}/include/filter.h
)

set(SOURCE_FILES
    src/jit.c
    src/core.c
)

add_library(ebpf SHARED ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(ebpf udis86)

add_subdirectory(examples)