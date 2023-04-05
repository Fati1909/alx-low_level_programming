#include "main.h"

/**
 * _pow_recursion - description
 * @x: first num
 * @y: second num
 * Return: -1 If y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
