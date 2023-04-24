#include "sort.h"
/**
 * bubble_sort - bubble-sort sorting algorithm
 * @array: array of integers to be sorted
 * @size: number of elements in array
 * Returns: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (i = 0; i < size - i - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
