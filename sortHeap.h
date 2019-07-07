/***********************************************************************
 * Module:
 *    Week 11, Sort Heap
 *    Brother Helfrich, CS 235
 * Author:
 *    Griffin Pope
 * Summary:
 *    This program will implement the Heap Sort
 ************************************************************************/
#ifndef SORT_HEAP_H
#define SORT_HEAP_H

//namespace custom
//{
#define MIN 0

template <class T>
class Heap
{
private:
    int num;
    T *array;
    void percolateDown(int index);
    void swap(int swapA, int swapB);
    void heapify();

public:
    Heap(T *t, int size)
    {
        array = t;
        num = size - 1;
        for (int index = num / 2; index >= MIN; index--)
        {
            percolateDown(index);
        }
    }
    T getMax();
    void deleteMax();
    void sort();
};

/************************************************
* HEAP :: PERCOLATE DOWN
* The item at the passed index may be out of heap
* order. Take care of that little detail!
************************************************/
template <class T>
void Heap<T>::percolateDown(int index)
{

    assert(index >= MIN && index <= num);

    // do nothing if we are a leaf
    int indexLeft = index * 2;
    if (indexLeft > num)
        return;
    int indexRight = indexLeft + 1;

    // if right is the worst of the two, then go that way
    if (indexRight <= num &&                    // there is an index right
        array[indexRight] > array[indexLeft] && // right is bigger than left
        array[indexRight] > array[index])       // right is bigger than parent
    {
        swap(index, indexRight);
        percolateDown(indexRight);
    }
    // if the left is the worst of the two, then go that way
    else if (array[indexLeft] > array[index]) // the left is bigger...
    {
        swap(index, indexLeft);
        percolateDown(indexLeft);
    }
    // otherwise do nothing
}

/**************************************************
* HEAP :: HEAPIFY
* Make a heap from the associated array
*************************************************/
template <typename T>
void Heap<T>::heapify()
{
}

/**************************************************
* HEAP :: SORT
* From a heap, perform the sort. This will serve
* to remove all the known items from the heap
*************************************************/

template <class T>
void Heap<T>::sort()
{
    while (num > MIN)
    {
        // put the highest element at the end of the list and forget about it!
        swap(MIN, num--);

        // percolate the root
        percolateDown(MIN);
    }
}

/* swap two indexes */
template <typename T>
void Heap<T>::swap(int swapA, int swapB)
{
    T temp = array[swapA];
    array[swapA] = array[swapB];
    array[swapB] = temp;
}

/*****************************************************
* SORT HEAP
* Perform the heap sort
****************************************************/
template <class T>
void sortHeap(T array[], int n)
{
    // put the data into the heap data structure
    Heap<T> heap(array, n);

    // sort it
    heap.sort();
    return;
}

#endif // SORT_HEAP_H

//} // end namespace custom