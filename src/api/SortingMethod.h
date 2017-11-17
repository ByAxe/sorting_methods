//
// Created by A.Litvinau on 16.11.2017.
//
#include <vector>

#ifndef SORTING_METHODS_SORTINGMETHOD_H
#define SORTING_METHODS_SORTINGMETHOD_H

using namespace std;

class SortingMethod {
public:

    explicit SortingMethod(vector<int> array);

    /**
     * Sorts given in constructor array with specified method in concrete implementation
     */
    virtual void sortArray();

    /**
     * Getter for an array
     * @return
     */
    const vector<int> &getArray() const;

    virtual ~SortingMethod();

protected:

    /**
    * @return size of given in constructor array
    */
    virtual int size();

    /**
     * Array that will be used in implementation
     */
    vector<int> array;
};


#endif //SORTING_METHODS_SORTINGMETHOD_H
