#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked
 * @h: singly linked list
 * Return: returns the number of elements in a linked
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
