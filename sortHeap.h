/***********************************************************************
 * Module:
 *    Week 11, Sort Heap
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Heap Sort
 ************************************************************************/
#ifndef SORT_HEAP_H
#define SORT_HEAP_H
/*
//namespace custom {
template <class T>
class Heap {
    private:
        int num;
        T *array;

    public:
        Heap(T *t, int num) : num(num) {
            array = t;
        }
        void percolateDown(int index);
        void sort();
        void swap(T swapA, T swapB);
        void sortHeap(T array[], int n);
};
*/

/************************************************
* HEAP :: PERCOLATE DOWN
* The item at the passed index may be out of heap
* order. Take care of that little detail!
************************************************/
/*
template <class T>
void Heap <T> :: percolateDown(int index)
{
assert(index >= 1 && index <= num);

// do nothing if we are a leaf
int indexLeft = index * 2;
if (indexLeft > num)
return;
int indexRight = indexLeft + 1;

// if right is the worst of the two, then go that way
if (indexRight <= num && // there is an index right
array[indexRight] > array[indexLeft] && // right is bigger than left
array[indexRight] > array[index]) // right is bigger than parent
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
*/
/**************************************************
* HEAP :: SORT
* From a heap, perform the sort. This will serve
* to remove all the known items from the heap
*************************************************/
/*
template <class T>
void Heap <T> :: sort()
{
while (num > 1)
{
// put the highest element at the end of the list and forget about it!
swap(1, num--);

// percolate the root
percolateDown(1);
}
}
*/
/* swap two indexes */
/*
template <typename T>
void Heap<T>::swap(T swapA, T swapB) {
    T temp = swapA;
    swapA = swapB;
    swapB = temp;
}
*/

/*****************************************************
* SORT HEAP
* Perform the heap sort
****************************************************/
template <class T>
void sortHeap(T array[], int n)
{
// put the data into the heap data structure
//Heap <T> heap(array, n);

// sort it
//heap.sort();
//return;
}

#endif // SORT_HEAP_H

//} // end namespace custom