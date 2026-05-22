i# 1. Define minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# 2. Define the project name and language (C)
project(boom C)

# 3. Add an executable target (output name followed by source files)
add_executable(boom src/main.c)
