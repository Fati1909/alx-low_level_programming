#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *fr, *fre;

	if (!head)
		return;

	fr = *head;
	while (fr)
	{
		fre = fr;
		fr = fr->next;
		free(fre);
	}
	*head = NULL;
}
