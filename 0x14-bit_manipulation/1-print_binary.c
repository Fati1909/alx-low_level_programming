#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number
 * @n: num
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8, init = 0;

	while (num)
	{
		if (n & 1L << --num)
		{
			_putchar('1');
			init++;
		}
		else if (init)
			_putchar('0');
	}
	if (!init)
		_putchar('0');
}
