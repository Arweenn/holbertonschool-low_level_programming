#include "lists.h"

/**
 * sum_dlistint - sum all data (n) of a dlistint_t list
 * @head: beginning of the dlistint_t list
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
