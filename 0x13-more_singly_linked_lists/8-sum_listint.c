#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: first head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
