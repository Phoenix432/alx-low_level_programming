#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: adress of pointer to head node
 * @str: string to put in the new node
 *
 * Return: lsit
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_n;

	return (new_n);
}
