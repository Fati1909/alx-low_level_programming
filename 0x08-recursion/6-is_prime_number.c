#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - description
 * @m: num
 * @n: num
 * Return: 0, 1
 */

int check(int n, int m);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - description
 * @m: num
 * @n: num
 * Return: int
 */

int check(int n, int m)
{

	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check(n, m + 1));
}
