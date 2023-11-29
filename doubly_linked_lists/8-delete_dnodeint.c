#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t list
 * @head: pointer to the beginning of a dlistint_t list
 * @index: index of the node to delete
 * Return: 1 upon success, -1 upon failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0 ; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
