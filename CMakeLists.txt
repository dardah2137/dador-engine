cmake_minimum_required(VERSION 3.27)

project("dador-engine")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/engine)
set(BUILD_SHARED_LIBS ON)

add_subdirectory(extern)
add_subdirectory(src)

option(demo "Compile demo executable?" ON)
if(demo)
    add_subdirectory(demo)
endif()