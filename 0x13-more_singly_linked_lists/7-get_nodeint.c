#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a index
 * @head: adresse of first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
