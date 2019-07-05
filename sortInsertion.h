/***********************************************************************
 * Module:
 *    Week 11, Sort Insertion
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Insertion Sort
 ************************************************************************/

#ifndef SORT_INSERTION_H
#define SORT_INSERTION_H

#include <cassert>

template <typename T>
bool binarySearch(const T array[], int size, const T &search) {
    int iFirst = 0;
    int iLast = size - 1;

    while (iLast >= iFirst) {
        int iMiddle = (iLast + iFirst) / 2;

        if (array[iMiddle] == search)
            return true;
        if (array[iMiddle] > search)
            iLast = iMiddle - 1;
        else 
            iFirst = iMiddle + 1;
    }
    return false;
}

/*****************************************************
 * SORT INSERTION
 * Perform the insertion sort
 ****************************************************/
template <class T>
void sortInsertion(T array[], int num)
{
}




#endif // SORT_INSERTION_H
