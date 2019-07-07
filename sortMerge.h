/***********************************************************************
 * Module:
 *    Week 11, Sort Merge
 *    Brother Helfrich, CS 235
 * Author:
 *    <author>
 * Summary:
 *    This program will implement the Merge Sort
 ************************************************************************/

#ifndef SORT_MERGE_H
#define SORT_MERGE_H

template <class T>
void merge(T destination[], T source1[], int size1, T source2[], int size2) {
    int i1 = 0; // array One is iOneStart to iOneMax
    int i2 = 0; // array Two is iTwoStart to iTwoMax

    for (int iDestination = 0; iDestination < (size1 + size2); iDestination++) {
        if (i1 <= size1 && (i2 == size2) || source1[i1] < source2[i2])
            destination[iDestination] = source1[i1++];
        else {
            destination[iDestination] = source2[i2++];
        }
    }
}


/*****************************************************
 * SORT MERGE
 * Perform the merge sort
 ****************************************************/
template <class T>
void sortMerge(T array[], int num)
{
    T *source = new T[num];
    for (int i = 0; i < num; i++) {
        source[i] = array[i];
    }

    T *destination = new T[num];
    destination = array;

    int numIterations;
    do {
        numIterations = 0;
        int iBegin1 = 0, iBegin2 = 0;
        
        while (iBegin1 < num) {
            numIterations++;

            int iEnd1 = 0;
            for (iEnd1 = iBegin1 + 1; iEnd1 < num && !(source[iEnd1 - 1] > source[iEnd1]); iEnd1++);

            iBegin2 = iEnd1;

            int iEnd2 = 0;
            for (iEnd2 = iBegin2 + 1; iEnd2 < num && !(source[iEnd2 - 1] > source[iEnd2]); iEnd2++);

            if (iBegin2 < num) {
                merge(destination + iBegin1, source + iBegin1, iEnd1 - iBegin1, source + iBegin2, iEnd2 - iBegin2);
            }
            iBegin1 = iEnd2;
        }

        //swap
        T *tmp = destination;
        destination = source;
        source = tmp;

    } while(numIterations > 1);
    if (array != source) {
        for (int i = 0; i < num; i++) {
            array[i] = source[i];
        }
    }
    delete [] source;
    delete [] destination;
}




#endif // SORT_MERGE_H
