#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees dlistint_t list
 * @head: beginning of the dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
