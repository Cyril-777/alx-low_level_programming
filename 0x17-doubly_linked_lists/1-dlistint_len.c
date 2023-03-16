#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}

	return (count);
}
