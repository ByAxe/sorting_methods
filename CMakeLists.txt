cmake_minimum_required(VERSION 3.8)
project(sorting_methods)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/api/SortingMethod.cpp src/api/SortingMethod.h src/impl/bubble/BubbleSort.cpp src/impl/bubble/BubbleSort.h src/impl/quick/QuickSort.cpp src/impl/quick/QuickSort.h)
add_executable(sorting_methods ${SOURCE_FILES})