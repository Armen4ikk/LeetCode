cmake_minimum_required(VERSION 3.23)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#Easy
add_executable(SingleNumber ./Easy/SingleNumber.cpp)
add_executable(PalindromeNUmber ./Easy/PalindromeNumber.cpp)
add_executable(RemoveElement ./Easy/RemoveElement.cpp)
add_executable(RemoveDuplicatesFromSortedArray ./Easy/RemoveDuplicatesFromSortedArray.cpp)
set_target_properties(SingleNumber PalindromeNUmber RemoveElement RemoveDuplicatesFromSortedArray PROPERTIES FOLDER "Easy")
