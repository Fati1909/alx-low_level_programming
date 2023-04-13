#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: array
 */

int *array_range(int min, int max)
{
	int l, n;
	int *P;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
		return (NULL);
	for (n = 0; n < l; n++)
		p[n] = min++;
	return (p);
}
