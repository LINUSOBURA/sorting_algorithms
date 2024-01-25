#include "sort.h"

/**
 * bubble_sort - function to sort array using bubble sort method
 * @array: pointer to an array to be sorted
 * @size: size of the array
 * Code by Linus Obura
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, k, j;
	int swapped;

	if (!array)
	{
		return;
	}

	for (k = 0; k < size - 1; k++)
	{
		swapped = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				j = array[i];
				array[i] = array[i + 1];
				array[i + 1] = j;
				print_array(array, size);
				swapped = 1;
			}
		}

		if (!swapped)
		{
			break;
		}
	}
}
