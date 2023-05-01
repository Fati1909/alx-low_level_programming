#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node 
 * @head: first node
 * @index: index of node
 * @n: num
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *old, *new = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	old = *head;
	while (old)
	{
		if (a == idx -1)
		{
			new->next = old->next;
			old->next = new;
			return (new);
		}
		a++;
		old = old->next;
	}
	free(new);
	return (NULL);
}
