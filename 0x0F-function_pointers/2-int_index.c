#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: num of elements in the array
 * @cmp: pointer to the function
 * Return: int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && size && cmp)
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
	return (-1);
}
