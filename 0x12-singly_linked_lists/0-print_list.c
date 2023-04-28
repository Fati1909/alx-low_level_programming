#include "lists.h"

/**
 * _slen - description
 * @str: string
 * Return: int
 */

int _slen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - function that print all the element of a list.
 * @h: head
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _slen(h->s), h->s ? h->s : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
