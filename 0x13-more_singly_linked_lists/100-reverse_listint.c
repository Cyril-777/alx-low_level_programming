#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: ptr to ptr listint_t
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev = NULL;

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next_node;
	}
	(*head)->next = prev;
	return (*head);
}
