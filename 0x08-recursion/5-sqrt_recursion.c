#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num
 * @i: square
 * Return: int
 */

int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that find square
 * @n: num
 * @i: square
 * Return: int
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
