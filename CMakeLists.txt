cmake_minimum_required(VERSION 3.15)
project(SingleFileRunner CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Compiler flags
add_compile_options(
    -ggdb -g -O0
    -fsanitize=address,undefined -fno-omit-frame-pointer
    -Werror -Wall -Weffc++ -Wextra -Wconversion
    -Wsign-conversion -pedantic-errors
    -fcolor-diagnostics
    -fansi-escape-codes
)

# LINKER flags (Required for sanitizers to work)
add_link_options(
    -fsanitize=address,undefined
)

# Ensure SRC is provided
if(NOT DEFINED SRC OR SRC STREQUAL "")
    message(FATAL_ERROR "No source file found.")
endif()

# Build using the absolute path of the passed SRC and the shared html-like.cpp upstairs
add_executable(app 
    ${SRC}
    ${CMAKE_CURRENT_SOURCE_DIR}/html-like.cpp
)

# Add a 'run' target to automatically execute the binary after building
add_custom_target(run
    COMMAND $<TARGET_FILE:app>
    DEPENDS app
    USES_TERMINAL
)
