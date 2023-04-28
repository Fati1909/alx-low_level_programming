#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *node_plus;
	
	if (!head)
		return;

	node = head;
	while (node)
	{
		node_plus = node->next;
		free(node->str);
		free(node);
		node = node_plus;
	}
}
