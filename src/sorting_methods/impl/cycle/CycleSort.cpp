//
// Created by Litvinau Aleksei on 11/19/17.
//

#include "CycleSort.h"

CycleSort::CycleSort(int *array, int size) : SortingMethod(array, size) {}

void CycleSort::sortArray() {
    cycleSort(array, size);
}

void CycleSort::cycleSort(int *array, int size) {
    // count number of memory writes
    int writes = 0;

    // traverse array elements and put it to on
    // the right place
    for (int cycle_start = 0; cycle_start <= size - 2; cycle_start++) {
        // initialize item as starting point
        int item = array[cycle_start];

        // Find position where we put the item. We basically
        // count all smaller elements on right side of item.
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < size; i++)
            if (array[i] < item)
                pos++;

        // If item is already in correct position
        if (pos == cycle_start)
            continue;

        // ignore all duplicate  elements
        while (item == array[pos])
            pos += 1;

        // put the item to it's right position
        if (pos != cycle_start) {
            swap(item, array[pos]);
            writes++;
        }

        // Rotate rest of the cycle
        while (pos != cycle_start) {
            pos = cycle_start;

            // Find position where we put the element
            for (int i = cycle_start + 1; i < size; i++)
                if (array[i] < item)
                    pos += 1;

            // ignore all duplicate  elements
            while (item == array[pos])
                pos += 1;

            // put the item to it's right position
            if (item != array[pos]) {
                swap(item, array[pos]);
                writes++;
            }
        }
    }

    // Number of memory writes or swaps
    // cout << writes << endl ;
}
