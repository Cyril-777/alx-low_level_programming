#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: ptr to first node in the linked list
 * Return: the size of the list that was free’d
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int ccc;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ccc = *h - (*h)->next;
		if (ccc > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);

}
