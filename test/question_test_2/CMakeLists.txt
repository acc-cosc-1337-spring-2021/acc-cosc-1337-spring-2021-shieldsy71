add_executable(q_02_tests "question_tests_2.cpp")
target_link_libraries(q_02_tests q_02_library)
add_test(NAME q_02_tests COMMAND q_02_tests -s)