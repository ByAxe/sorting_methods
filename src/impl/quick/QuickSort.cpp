//
// Created by A.Litvinau on 16.11.2017.
//

#include <iostream>
#include "QuickSort.h"

using namespace std;

QuickSort::QuickSort(const vector<int> &array) : SortingMethod(array) {}

void QuickSort::sortArray() {
    int lowerBound = 0;
    int upperBound = this->size() - 1;

    quickSort(array, lowerBound, upperBound);
}

void QuickSort::quickSort(vector<int> &array, int lowerBound, int upperBound) {
    if (lowerBound < upperBound) {
        int p = partition(array, lowerBound, upperBound);

        quickSort(array, lowerBound, p - 1);
        quickSort(array, p, upperBound);
    }
}

int QuickSort::partition(vector<int> &array, int lowerBound, int upperBound) {
    int pivot = getPivot(array, lowerBound, upperBound);

    int i = lowerBound - 1;

    for (int j = lowerBound; j < upperBound - 1; ++j) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    if (array[upperBound] < array[i + 1]) {
        swap(array[i + 1], array[upperBound]);
    }

    return i + 1;
}

int QuickSort::getPivot(vector<int> &array, int lowerBound, int upperBound) {
    /* //the random device that will seed the generator
     random_device seeder;

     //then make a mersenne twister engine
     mt19937 engine(seeder());

     //then the easy part... the distribution
     uniform_int_distribution<int> dist(lowerBound, upperBound);

     //then just generate the integer like this:
     int idx = dist(engine);*/

    return array[upperBound];
}