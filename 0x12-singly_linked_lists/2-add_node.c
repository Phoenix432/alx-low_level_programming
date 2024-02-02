#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of pointer to head node
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!new_h)
	{
		return (NULL);
	}

	new_h->str = strdup(str);
	new_h->len = len;
	new_h->next = (*head);
	(*head) = new_h;

	return (*head);
}
