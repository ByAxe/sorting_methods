//
// Created by A.Litvinau on 16.11.2017.
//

#include <iostream>
#include "QuickSort.h"

using namespace std;

QuickSort::QuickSort(int *array, int size) : SortingMethod(array, size) {}

void QuickSort::sortArray() {
    int lowerBound = 0;
    int upperBound = size - 1;

    quickSort(array, lowerBound, upperBound);
}

void QuickSort::quickSort(int *array, int lowerBound, int upperBound) {
    if (lowerBound >= upperBound) {
        return;
    }
    int p = partition(array, lowerBound, upperBound);

    quickSort(array, lowerBound, p - 1);
    quickSort(array, p + 1, upperBound);
}

int QuickSort::partition(int *array, const int lowerBound, const int upperBound) {
    const int mid = lowerBound + (upperBound - lowerBound) / 2;
    const int pivot = array[mid];
    // move the mid point value to the front.
    swap(array[mid], array[lowerBound]);
    int i = lowerBound + 1;
    int j = upperBound;
    while (i <= j) {
        while (i <= j && array[i] <= pivot) {
            i++;
        }

        while (i <= j && array[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(array[i], array[j]);
        }
    }
    swap(array[i - 1], array[lowerBound]);
    return i - 1;
}


