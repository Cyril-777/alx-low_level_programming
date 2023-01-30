#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: ptr to ptr listint_t
 * @n: const
 * Return: the address of the new element, or NULL
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
