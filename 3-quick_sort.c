#include "sort.h"

/**
 * partition - puts the pivot in the appropriate position
 * @array: array of integers
 * @size: size of the array
 * Return: the pivot
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	size_t i = low, j, aux, pivot = high;

	for (j = low; j < high; j++)
	{
		if (array[j] <= array[pivot] && array[i] > array[pivot])
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;
			i++;
			print_array(array, size);
		}
		if (array[j] <= array[pivot] && array[i] <= array[pivot])
		{
			i++;
		}
	}
	if (array[pivot] < array[i])
	{
		aux = array[i];
		array[i] = array[pivot];
		array[pivot] = aux;
		print_array(array, size);
	}
	return (i);
}

/**
 * low_high - sorts an array of integers in ascending
 * order using the Quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void low_high(int *array, size_t size, size_t low, size_t high)
{
	size_t pivot, low = 0, high;


	if (size > 1 )
	{
		pivot = partition(array, size, low, high);
		low = size - 1 - pivot;
		/*printf("pivot is %d\n", (int)pivot);*/
		low_high(array, size, low + 1, pivot - 1); /* left array */
		low_high(array, size, pivot + 1, high - 1); /* right */
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t low = 0, high = size - 1;

	low_high(array, size, low, high);
}
