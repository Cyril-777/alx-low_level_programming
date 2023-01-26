#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: ptr to first node
 * @str: ptr to str
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *ptrtostr = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (ptrtostr == NULL)
		return (NULL);

	while (ptrtostr[i] != '\0')
		i++;

	new->str = ptrtostr;
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (new);
}
