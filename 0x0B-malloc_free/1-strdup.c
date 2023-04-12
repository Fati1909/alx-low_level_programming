#include "main.h"

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
			ptr[n] = str[n];
	}
	return (ptr);
}
