#include "lists.h"

/**
 * pop_listint -  function that deletes the head node
 * @head: first node
 * Return: num
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = node;
	return (i);
}
