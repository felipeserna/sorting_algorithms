#include "sort.h"

/**
 * partition - puts the pivot in the appropriate position
 * @array: array of integers.
 * @size: size of the array.
 * @array_2: a copy of the original array.
 * @size_2: size of the array_2
 * Return: the pivot
 */
size_t partition(int *array, size_t size, int *array_2, size_t size_2)
{
	size_t i = 0, j, aux, pivot = size_2;

	for (j = 0; j < size_2; j++)
	{
		/* searching for one greater and one lesser than the pivot */
		if (array_2[j] <= array_2[pivot] &&
		    array_2[i] > array_2[pivot])
		{
			/* swap */
			aux = array_2[i];
			array_2[i] = array_2[j];
			array_2[j] = aux;
			i++; /* advances with swap between i and j */
			print_array(array, size);
		}
		if (array_2[j] <= array_2[pivot] &&
		    array_2[i] <= array_2[pivot])
		{
			i++; /* advances when smaller than pivot */
		}
	}
	if (array_2[pivot] < array_2[i])
	{
		/* swap */
		aux = array_2[i];
		array_2[i] = array_2[pivot];
		array_2[pivot] = aux;
		print_array(array, size);
	}
	return (i); /* final position of the pivot */
}

/**
 * quick_recursion - iterates through each sub-array.
 * @array: array of integers.
 * @size: size of the array.
 * @array_2: copy of the original array.
 * @size_2: size of the array_2.
 * Return: void
 */
void quick_recursion(int *array, size_t size, int *array_2, size_t size_2)
{
	size_t pivot;

	if (size_2 > 1) /* sorts arrays with more than one element */
	{
		pivot = partition(array, size, array_2, size_2 - 1);
		/* left array */
		quick_recursion(array, size, array_2, pivot);
		/* right array */
		quick_recursion(array, size,
				array_2 + pivot + 1, size_2 - pivot - 1);
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
	quick_recursion(array, size, array, size);
}
