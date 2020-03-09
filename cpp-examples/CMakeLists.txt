cmake_minimum_required(VERSION 3.15)
project(cpp_examples)

set(SOURCES
        src/string_operation.cpp
        src/list_op.cpp
        src/main.cpp
        )

# Add an executable with the above sources
add_executable(cpp_examples ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(cpp_examples
PRIVATE
${PROJECT_SOURCE_DIR}/include
)

