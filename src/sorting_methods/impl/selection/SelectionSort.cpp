//
// Created by Litvinau Aleksei on 11/19/17.
//

#include "SelectionSort.h"

SelectionSort::SelectionSort(int *array, int size) : SortingMethod(array, size) {}

void SelectionSort::sortArray() {
    selectionSort(array, size);
}

void SelectionSort::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort::selectionSort(int *array, int size) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (array[j] < array[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&array[min_idx], &array[i]);
    }
}
