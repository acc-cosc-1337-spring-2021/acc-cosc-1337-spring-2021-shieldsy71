cmake_minimum_required (VERSION 3.8)
project(q_03_library)

add_library(q_03_library "question3.cpp" "question3.h")
add_executable(q_03_exe "main.cpp" "question3.cpp")




