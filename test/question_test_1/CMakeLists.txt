add_executable(q_01_tests "question_tests_1.cpp")
target_link_libraries(q_01_tests q_01_library)
add_test(NAME q_01_tests COMMAND q_01_tests -s)