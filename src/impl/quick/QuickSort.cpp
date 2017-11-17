//
// Created by A.Litvinau on 16.11.2017.
//

#include <iostream>
#include "QuickSort.h"
#include <random>

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

    int i = lowerBound;
    int j = upperBound;

    while (i <= j) {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;
        if (i <= j) {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    return i;
}

int QuickSort::getPivot(vector<int> &array, int lowerBound, int upperBound) {
    //the random device that will seed the generator
    random_device seeder;

    //then make a mersenne twister engine
    mt19937 engine(seeder());

    //then the easy part... the distribution
    uniform_int_distribution<int> dist(lowerBound, upperBound);

    //then just generate the integer like this:
    int idx = dist(engine);

    return array[idx];
}