/***********************************************************************
 * Module:
 *    Week 11, Sort Bubble
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Bubble Sort
 ************************************************************************/

#ifndef SORT_BUBBLE_H
#define SORT_BUBBLE_H


/* function to swap elements */
template <typename T>
void swap(T *swapA, T *swapB) {
    T temp = *swapA;
    *swapA = *swapB;
    *swapB = temp;
}

/*****************************************************
 * SORT BUBBLE
 * Perform the bubble sort
 ****************************************************/
template <class T>
void sortBubble(T array[], int num)
{
    for (int i = 0; i < num -1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}



#endif // SORT_BUBBLE_H
