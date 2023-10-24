#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: array of integers that need to be sorted.
 * @size: size of the array of integers.
 *
 * Return: void, no return.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_elem, temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min_elem = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_elem])
			{
				min_elem = j;
			}
		}

		temp = array[min_elem];
		array[min_elem] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}

