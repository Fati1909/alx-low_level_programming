#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string
 * @n: num
 * @...: int to print
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (m--)
		printf("%d%s", va_arg(ap, int),
				m ? (separator ? separator : "") : "\n");
	va_end(ap);
}
