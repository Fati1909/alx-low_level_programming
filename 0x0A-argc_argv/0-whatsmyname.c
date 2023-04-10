#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(__attribute__((unused))int argc, char const **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

