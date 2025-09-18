cmake_minimum_required(VERSION 4.1)
project(SimpleMathematicsExamples C)

set(CMAKE_C_STANDARD 11)

add_executable(SimpleMathematicsExamples src/feladatok.c
        test/tests.c
        src/feladatok.h)
