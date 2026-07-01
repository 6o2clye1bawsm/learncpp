cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_COMPILER clang++)

project(LearnCPP CXX)

# Compiler flags
add_compile_options(
    -ggdb -g -O0
    -fsanitize=address,undefined -fno-omit-frame-pointer
    -Werror -Wall -Weffc++ -Wextra -Wconversion
    -Wsign-conversion -pedantic-errors
    -fcolor-diagnostics
    -fansi-escape-codes
)

# Linker flags
add_link_options(
    -fsanitize=address,undefined
)

# AUTOMATE COMMON HELPERS: Automatically find all .cpp files in common/src/
file(GLOB COMMON_SOURCES "common/src/*.cpp")

# Create a static library out of whatever files were found
add_library(common STATIC ${COMMON_SOURCES})

# Tell CMake where other files can find common's headers
target_include_directories(common PUBLIC common/include)

# Ensure SRC is provided
if(NOT DEFINED SRC OR SRC STREQUAL "")
    message(FATAL_ERROR "Use -DSRC=path/to/file.cpp $(pwd) for source files.")
endif()

# Build using the absolute path of the passed SRC and the shared html-like.cpp upstairs
add_executable(app ${SRC})

# Link your automated common library (brings in all current and future helpers automatically)
target_link_libraries(app PRIVATE common)

# Add a run target
add_custom_target(run
    COMMAND $<TARGET_FILE:app>
    DEPENDS app
    USES_TERMINAL
)
