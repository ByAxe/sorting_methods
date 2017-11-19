//
// Created by A.Litvinau on 16.11.2017.
//

#include "SortingMethod.h"

#include <iostream>

using namespace std;


void SortingMethod::sortArray() {
    cout << "Called abstract class method" << endl;
}

vector<int> SortingMethod::getArray() {
    vector<int> returningValue(static_cast<unsigned long>(size));

    for (int i = 0; i < size; ++i) {
        returningValue[i] = this->array[i];
    }

    return returningValue;
}


SortingMethod::SortingMethod(int *array, int size) : array(array), size(size) {}

void SortingMethod::display() {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
}

SortingMethod::~SortingMethod() = default;



