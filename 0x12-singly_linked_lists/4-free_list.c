#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: ptr to the head node
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
