#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node of a dlistint_t list.
 * @head: 1st node
 * @index: The node
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head == NULL ? NULL : head);
}
