#include "main.h"

/**
 * print_rev - prints reversert string, following by new line
 * @s: pointer to the string to print
 * return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');

}

