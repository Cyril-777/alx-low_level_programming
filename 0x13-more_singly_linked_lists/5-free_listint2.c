#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * andsets the head to NULL
 * @head: ptr to ptr listint_t
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}

	*head = NULL;
}
