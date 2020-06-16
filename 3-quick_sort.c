#include "sort.h"

/**
 * partition - puts the pivot in the appropriate position
 * @array: array of integers
 * @size: size of the array
 * Return: the pivot
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
        size_t i = 0, j, aux, pivot = size - 1;

        for (j = 0; j < pivot; j++)
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
