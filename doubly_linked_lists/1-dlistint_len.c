#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list
 * @h: head of the dlistint_t list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
