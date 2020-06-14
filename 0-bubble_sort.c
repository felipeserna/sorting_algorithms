#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int flag, aux = 0;
	size_t i, stop = (size - 1);

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < stop; i++)
	{
		flag = 0;
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
			print_array(array, size);
			flag = 1;
		}
		if (flag == 0 && i == stop - 1)
			return;
		if (i == (stop - 1) && flag == 1)
		{
			i = -1;
			stop--;
		}
	}
}
