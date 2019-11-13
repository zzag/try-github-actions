set(mathtest_SRCS
    mathtest.cc
)
add_executable(mathtest ${mathtest_SRCS})
target_link_libraries(mathtest
    Qt5::Core
    Qt5::Test
)
add_test(NAME mathtest COMMAND mathtest)
