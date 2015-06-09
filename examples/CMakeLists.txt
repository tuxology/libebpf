set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wl,-rpath,'$$ORIGIN/../build' -L../build")

set(SOURCE_FILES
    filter_test.c
)

add_executable(filter_test ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(filter_test ebpf m elf)

