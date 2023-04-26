#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: given array to be sorted
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] != array[min])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
