cmake_minimum_required (VERSION 3.8)
project(q_02_library)

add_library(q_02_library "question2.cpp" "question2.h")
add_executable(q_02_exe "main.cpp" "question2.cpp")




