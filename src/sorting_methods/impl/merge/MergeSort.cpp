//
// Created by Litvinau Aleksei on 11/19/17.
//

#include "MergeSort.h"


MergeSort::MergeSort(int *array, int size) : SortingMethod(array, size) {}

void MergeSort::sortArray() {
    mergeSort(array, size);

    revertArray();
}

/* Helper function for finding the max of two numbers */
int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

/* left is the index of the leftmost element of the subarray; right is one
 * past the index of the rightmost element */
void MergeSort::mergeHelper(int *array, int left, int right, int *scratch) {
    /* base case: one element */
    if (right == left + 1) {
        return;
    } else {
        int i = 0;
        int length = right - left;
        int midpoint_distance = length / 2;
        /* l and r are to the positions in the left and right subarrays */
        int l = left, r = left + midpoint_distance;

        /* sort each subarray */
        mergeHelper(array, left, left + midpoint_distance, scratch);
        mergeHelper(array, left + midpoint_distance, right, scratch);

        /* merge the arrays together using scratch for temporary storage */
        for (i = 0; i < length; i++) {
            /* Check to see if any elements remain in the left array; if so,
             * we check if there are any elements left in the right array; if
             * so, we compare them.  Otherwise, we know that the merge must
             * use take the element from the left array */
            if (l < left + midpoint_distance &&
                (r == right || max(array[l], array[r]) == array[l])) {
                scratch[i] = array[l];
                l++;
            } else {
                scratch[i] = array[r];
                r++;
            }
        }
        /* Copy the sorted subarray back to the input */
        for (i = left; i < right; i++) {
            array[i] = scratch[i - left];
        }
    }
}

/* mergesort returns true on success.  Note that in C++, you could also
 * replace malloc with new and if memory allocation fails, an exception will
 * be thrown.  If we don't allocate a scratch array here, what happens?
 *
 * Elements are sorted in reverse order -- greatest to least */

int MergeSort::mergeSort(int *array, int size) {
    auto *scratch = (int *) malloc(size * sizeof(int));
    if (scratch != nullptr) {
        mergeHelper(array, 0, size, scratch);
        free(scratch);
        return 1;
    } else {
        return 0;
    }
}

void MergeSort::revertArray() {
    int temp, i;
    for (i = 0; i < size / 2; ++i) {
        temp = array[size - i - 1];
        array[size - i - 1] = array[i];
        array[i] = temp;
    }
}
