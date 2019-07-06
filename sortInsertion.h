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
int binarySearch(const T array[], const T &search, int iBegin, int iEnd) {
    int iMiddle = (iEnd + iBegin) / 2;

    if (iBegin > iEnd)
        return iBegin;
    if (array[iMiddle] == search)
        return iMiddle;
    if (search > array[iMiddle])
        return binarySearch(array, search, iMiddle + 1, iEnd);
    else 
        return binarySearch(array, search, iBegin, iMiddle - 1);
    return false;
}

/*****************************************************
 * SORT INSERTION
 * Perform the insertion sort
 ****************************************************/
template <class T>
void sortInsertion(T array[], int num)
{
    for (int iPivot = num - 2; iPivot >= 0; iPivot--) {
        T valuePivot = array[iPivot];
        int iInsert = binarySearch(array, valuePivot, iPivot + 1, num - 1);
        iInsert--;
        int iShift = iPivot;
        for (; iShift < iInsert; iShift++) {
            array[iShift] = array[iShift + 1];
        }
        array[iShift] = valuePivot;
        
    }

}




#endif // SORT_INSERTION_H
