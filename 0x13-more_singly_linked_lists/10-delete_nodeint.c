#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: ptr to ptr listint_t
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *last = *head;

	if (last == NULL || (last->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (count = 0; (count < (index - 1)) && (last != NULL); count++)
		{
			last = last->next;
		}
	}
	temp = last->next;

	if (index != 0)
	{
		last->next = temp->next;
		free(temp);
	}
	else
	{
		free(last);
		*head = temp;
	}
	return (1);
}
