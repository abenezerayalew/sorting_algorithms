#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, repeat, temp;
    for (repeat = 0; repeat < size - 1; ++repeat)
    {
        for (i = 0; i < size - repeat - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                print_array(array, size);
            }
        }
    }

}