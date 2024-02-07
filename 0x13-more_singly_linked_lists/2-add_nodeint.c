#include "lists.h"

/**
 * add_nodeint - adds a new node to linked list
 * @head: pointer to the first node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (!new_n)
		return (NULL);

	new_n->next = *head;
	new_n->n = n;
	*head = new_n;

	return (new_n);
}
