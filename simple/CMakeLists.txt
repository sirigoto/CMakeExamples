cmake_minimum_required(VERSION 3.14)

project(SimpleProject VERSION 0.1.0 DESCRIPTION "simple" LANGUAGES CXX)

set(MYVAR "\"MYVAR!\"")
configure_file("simple.h.in" "${PROJECT_BINARY_DIR}/include/simple.h")

include_directories("${PROJECT_BINARY_DIR}/include")

add_executable(simple simple.cpp)
message(STATUS Status!)

add_library(mylib OBJECT lib.cpp lib.h)
target_link_libraries(simple PRIVATE mylib)
