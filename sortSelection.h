/***********************************************************************
 * Module:
 *    Week 11, Sort Select
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Selection Sort
 ************************************************************************/

#ifndef SORT_SELECTION_H
#define SORT_SELECTION_H

template <class T>
void swapSelection(T *swapA, T *swapB) {
    T temp = *swapA;
    *swapA = *swapB;
    *swapB = temp;
}

/*****************************************************
 * SORT SELECTION
 * Perform the selection sort
 ****************************************************/
template <class T>
void sortSelection(T array[], int num)
{
    int iLargest = 0;
    int iCheck = 1;

    for (int iPivot = num - 1; iPivot > 0; iPivot--) {
        for (iCheck = 0; iCheck < iPivot; iCheck++) {
            if (array[iLargest] < array[iCheck]) {
                iLargest = iCheck;
            }
        }
        if (array[iLargest] > array[iPivot])
            swapSelection(&array[iPivot], &array[iLargest]);
    }
}


#endif // SORT_SELECTION_H
