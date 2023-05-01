#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
