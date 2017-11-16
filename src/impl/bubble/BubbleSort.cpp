//
// Created by A.Litvinau on 16.11.2017.
//

#include <c++/iostream>
#include "BubbleSort.h"

BubbleSort::BubbleSort(const vector<int> &array) : SortingMethod(array) {}

void BubbleSort::sortArray() {
    auto size = static_cast<int>(array.size());

    int temp;

    for (int i = size - 1; i >= 0; --i) {
        for (int j = 0; j <= i - 1; ++j) {
            if (array[j] > array[j + 1]) {

                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

