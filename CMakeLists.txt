cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)
ADD_SUBDIRECTORY(C语言测试)
ADD_SUBDIRECTORY(函数)
ADD_SUBDIRECTORY(作用域)
ADD_SUBDIRECTORY(多态)

add_executable(Code C++测试/main.cpp 题目/StudentAddressBook.c)


add_executable(test1 test1.cpp)
add_executable(test C语言测试/test.c)

add_executable(StudentAddressBook 题目/StudentAddressBook.c)
add_executable(derive_more_2 派生与继承/derive_more_2.cpp)