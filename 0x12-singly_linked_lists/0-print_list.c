#include "lists.h"

/**
 * _strlen - description
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - function that print all the element of a list.
 * @h: head
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
