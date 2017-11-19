cmake_minimum_required(VERSION 3.8)
project(sorting_methods)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/sorting_methods/api/SortingMethod.cpp src/sorting_methods/api/SortingMethod.h src/sorting_methods/impl/bubble/BubbleSort.cpp src/sorting_methods/impl/bubble/BubbleSort.h src/sorting_methods/impl/quick/QuickSort.cpp src/sorting_methods/impl/quick/QuickSort.h src/sorting_methods/impl/binary_tree/BinaryTree.cpp src/sorting_methods/impl/binary_tree/BinaryTree.h src/test/Juxtaposer.cpp src/test/Juxtaposer.h src/sorting_methods/impl/merge/MergeSort.cpp src/sorting_methods/impl/merge/MergeSort.h src/sorting_methods/impl/heap/HeapSort.cpp src/sorting_methods/impl/heap/HeapSort.h)
add_executable(sorting_methods ${SOURCE_FILES})