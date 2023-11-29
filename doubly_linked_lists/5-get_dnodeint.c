#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t list
 * @head: beginning of the dlistint_t list
 * @index: index of the node, starting from 0
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	for (; index != 0 && head != NULL; index--)
		head = head->next;

	return (head);
}
