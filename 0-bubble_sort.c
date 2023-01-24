#include "sort.h"

void bubble_sort(int *array, size_t size)
{

  for (int repeat = 0; repeat < size - 1; ++repeat) {
      
    for (int i = 0; i < size - repeat - 1; ++i) {
      
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        print_array(array, size);
      }
    }
 }

}