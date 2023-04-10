#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
