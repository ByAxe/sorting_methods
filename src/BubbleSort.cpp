//
// Created by A.Litvinau on 16.11.2017.
//

#include <c++/iostream>
#include "BubbleSort.h"

BubbleSort::BubbleSort(const vector<int> &array) : SortingMethod(array) {}

void BubbleSort::sortArray() {
    unsigned long long int s = array.size();
    cout << "Called BubbleSort implementation method. Array size: " + s << endl;
}

