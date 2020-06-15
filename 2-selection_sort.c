#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, aux, aux_2;

	for (i = 0; i < size; i++)
	{
		aux_2 = i; /* new element to compare */
		for (j = i; j < size; j++) /* searching smallest element */
		{
			if (array[aux_2] > array[j])
			{
				/* storing index of new smallest element */
				aux_2 = j;
			}
		}
		/* making the swap */
		aux = array[i];
		array[i] = array[aux_2];
		array[aux_2] = aux;

		if (array[aux_2] != array[i])
			/* a swap was made */
			print_array(array, size);
	}
}
