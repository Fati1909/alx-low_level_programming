#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - add a new node at the end.
 * @head: first node
 * @n: int
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *prov = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (prov->next != NULL)
		{
			prov = prov->next;
		}

		prov->next = new_node;
		new_node->prev = prov;
	}

	return (new_node);
}
