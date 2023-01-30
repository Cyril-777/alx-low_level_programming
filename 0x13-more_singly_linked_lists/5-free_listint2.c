#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 *  andsets the head to NULL
 * @head: ptr to ptr listint_t
 **/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	if ((*head)->next != NULL)
		ptr = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
	}
	if (*head)
	{
		free_listint2(&ptr);
		free(*head);
	}
	*head = NULL;
}
