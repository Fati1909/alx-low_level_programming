#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
	{
	size_t step = 0, prev_step = 0;

	if (!array)
		return (-1);
	/* search the block */
	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step,
				array[step]);
		prev_step = step;
		step += sqrt(size);
		if (step >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev_step,
			step);
	/* make a linear search inside the found block */
	while (array[prev_step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_step,
				array[prev_step]);
		prev_step++;
		if (prev_step >= size)
			return (-1);
	}
	/* check that the value found */
	if (array[prev_step] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_step,
				array[prev_step]);
		return (prev_step);
	}
	return (-1);
}
