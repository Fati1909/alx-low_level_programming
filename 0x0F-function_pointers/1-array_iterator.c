#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *  as a parameter on each element of an array
 *  @array: array
 *  @size: size of an array
 *  @action: pointer to the function
 *  Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *fin = &array + size - 1;

	if (array && size && action)
		while (array <= fin)
			action(*array++);
}
