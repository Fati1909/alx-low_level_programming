#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: first node
 * Return: address
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	rev = *head;
	*head = NULL;
	while (rev)
	{
		next = rev->next;
		rev->next = *head;
		*head = rev;
		rev = next;
	}
	return (*head);
}
