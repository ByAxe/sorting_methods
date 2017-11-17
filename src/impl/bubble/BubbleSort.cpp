//
// Created by A.Litvinau on 16.11.2017.
//

#include <iostream>
#include "BubbleSort.h"

BubbleSort::BubbleSort(const vector<int> &array) : SortingMethod(array) {}


void BubbleSort::sortArray() {
    bubbleSort();
}

void BubbleSort::bubbleSort() {
    int size = this->size();

    for (int i = size - 1; i >= 0; --i) {
        for (int j = 0; j <= i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

