#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new_node at the end of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: integer for the new node
 * Return: address of the new element, NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *new_node;

	last_node = *head;

	if (head == NULL)
		return (NULL);

	while (last_node != NULL && last_node->next != NULL)
		last_node = last_node->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = last_node;
	new_node->next = NULL;

	if (last_node != NULL)
		last_node->next = new_node;

	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
