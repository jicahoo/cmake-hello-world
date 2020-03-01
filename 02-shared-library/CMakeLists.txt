CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

PROJECT(hello-shared-lib)

add_library(
        hello
        SHARED
        ${PROJECT_SOURCE_DIR}/lib-src/hello.cpp
)

# Why don't need header file in add_library? Please consider the basic process of compiling C++ program.
# Header files are included into cpp file in pro-processor. So so file don't need to know the header file.

