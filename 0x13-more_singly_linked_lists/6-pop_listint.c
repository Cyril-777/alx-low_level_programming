#include "lists.h"
/**
 * pop_listint - Function
 * @head: ptr to ptr listint_t
 * Return: returns the head of node's data (n)
 *  if the linked list is empty return 0
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int c;

	if (head == NULL || !(*head))
		return (0);
	temp = *head;
	c = temp->n;
	*head = temp->next;
	free(temp);

	return (c);
}
