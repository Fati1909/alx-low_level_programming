#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string
 * @n: num
 * @...: str to print
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (m--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				m ? (separator ? separator : "") : "\n");
	va_end(ap);
}
