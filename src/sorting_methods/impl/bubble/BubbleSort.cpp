//
// Created by A.Litvinau on 16.11.2017.
//

#include <iostream>
#include "BubbleSort.h"

BubbleSort::BubbleSort(int *array, int size) : SortingMethod(array, size) {}

void BubbleSort::sortArray() {
    bubbleSort();
}

void BubbleSort::bubbleSort() {
    for (int i = size - 1; i >= 0; --i) {
        for (int j = 0; j <= i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}



