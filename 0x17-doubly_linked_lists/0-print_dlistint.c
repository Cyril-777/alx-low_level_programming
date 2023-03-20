#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}

	return (count);
}