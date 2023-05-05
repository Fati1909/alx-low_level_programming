#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: num
 * @m: num
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int init = 0;

	while (num)
	{
		if (num & 1ul)
			init++;
		num = num >> 1;
	}
	return (init);
}
