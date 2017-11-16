//
// Created by A.Litvinau on 16.11.2017.
//

#include "SortingMethod.h"

#include <c++/iostream>
#include <utility>

using namespace std;

SortingMethod::SortingMethod(vector<int> array) : array(std::move(array)) {}

const vector<int> &SortingMethod::getArray() const {
    return array;
}

void SortingMethod::sortArray() {
    cout << "Called abstract class method" << endl;
}

SortingMethod::~SortingMethod() = default;



