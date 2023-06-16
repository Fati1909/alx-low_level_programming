#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that free a list
 * @head: first node
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *a = head;
	dlistint_t *n;

	while (a != NULL)
	{
		n = a->n;
		free(a);
		a = n;
	}
}
