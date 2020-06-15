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
	size_t i = 0, counter = 0, aux, aux_2 = i;

	for (; i < size; i++)
	{

		if (array[aux_2] > array[i])
			aux_2 = i;

		if (i == size - 1)
		{
			aux = array[counter];
			array[counter] = array[aux_2];
			array[aux_2] = aux;

			if (array[counter] != array[aux_2])
				print_array(array, size);

			counter++;
			i = counter - 1;
			aux_2 = counter;

		}
	}
}
