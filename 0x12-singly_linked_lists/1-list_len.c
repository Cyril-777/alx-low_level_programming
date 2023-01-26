#include "lists.h"
/**
 * list_len - returns the numbers of elements in a linked list_t list
 * @h: ptr to the linked list_t
 * Return: the number of elements in a linked list
 **/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
