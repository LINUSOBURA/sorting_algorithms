#include "sort.h"
/**
 * selection_sort - Function to sort an array
 * @array: pointer to an array to be sorted
 * @size: size of the array
 * Code by Linus Obura
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, temp, minimum;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
			{
				minimum = j;
			}
		}

		if (minimum != i)
		{
			temp = array[i];
			array[i] = array[minimum];
			array[minimum] = temp;
			print_array(array, size);
		}
	}
}
