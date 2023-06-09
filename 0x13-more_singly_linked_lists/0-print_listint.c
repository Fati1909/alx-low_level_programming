#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: first node
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
