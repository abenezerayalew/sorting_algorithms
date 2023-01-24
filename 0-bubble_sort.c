#include "sort.h"
/**
 * bubble_sort - Sort an array of integers in ascending order
 *
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Return: Noting
 */
void bubble_sort(int *array, size_t size)
{
	size_t step, i;

	for (step = 0; step < size - 1; ++step)
	{
		int swapped = 0;

		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
