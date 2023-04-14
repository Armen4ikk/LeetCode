cmake_minimum_required(VERSION 3.23)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#Easy
add_executable(SingleNumber ./Easy/SingleNumber.cpp)
add_executable(PalindromeNUmber ./Easy/PalindromeNumber.cpp)
set_target_properties(SingleNumber PalindromeNUmber PROPERTIES FOLDER "Easy")
