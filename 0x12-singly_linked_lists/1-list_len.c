#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
