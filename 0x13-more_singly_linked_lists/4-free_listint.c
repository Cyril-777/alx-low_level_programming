#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: address of first node of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr2;

	ptr = head;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
}
