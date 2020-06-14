#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	clock_t begin = clock();
	clock_t end;
	/*int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
	/*int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};*/
	/*
	 *  int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7, 4, 4, 23,
	   43, 32, 454, 1000, 34, 33333, 4444, 21223, 4444,
	 	       444, 812, 8434, 48583, 32435, 333, 545, 457, 841,
	 	       1212, 222, 468, 45666, 33332, 1234, 645, 21888, 22,
	 	       909, 499, 998, 4654, 4567, 13, 52, 96, 73, 86, 7, 4, 4,
	 	       43, 32, 454, 1000, 34, 33333, 4444, 21223, 4444,
	 	       444, 812, 8434, 48583, 32435, 333, 545, 457, 841,
	 	       1212, 222, 468, 45666, 33332, 1234, 645, 21888, 22,
	 	       909, 499, 998, 4654, 4567};
	 */
	int array[] = {1, 2};
	size_t n = sizeof(array) / sizeof(array[0]);
	double time_spent;

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nthe execution time was %f s\n", time_spent);
	return (0);
}
