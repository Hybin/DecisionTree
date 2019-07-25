cmake_minimum_required(VERSION 3.14)
project(DecisionTree)

set(CMAKE_CXX_STANDARD 14)

set(Source_Code
        src/main.cpp
        src/processor.cpp
        src/include/processor.h
        src/include/utils.h
        src/utils.cpp)

set(Test_Code
        test/tester.cpp
        test/tester.h)

add_executable(DecisionTree ${Source_Code} ${Test_Code})