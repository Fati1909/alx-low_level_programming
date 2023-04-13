#include "main.h"

/**
 * _len - function that find length of a string
 * @s: string
 * Return: int
 */

int _len(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: argument
 * @av: argument
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int n = 0, nc = 0, m = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; n < ac; n++; nc++)
		nc += _len(av[n]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++, cmpt++)
			s[cmpt] = av[n][m];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
