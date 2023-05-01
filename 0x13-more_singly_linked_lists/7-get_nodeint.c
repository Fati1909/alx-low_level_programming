#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node
 * @index: index of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
