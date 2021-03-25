add_executable(q_03_tests "question_tests_3.cpp")
target_link_libraries(q_03_tests q_03_library)
add_test(NAME q_03_tests COMMAND q_03_tests -s)