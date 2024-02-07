#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given index
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: new node value
 *
 * Return: pointer to the new_n node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_n;
	listint_t *temp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_n->next = temp->next;
			temp->next = new_n;
			return (new_n);
		}
		else
			temp = temp->next;
	}
	free(new_n);
	return (NULL);
}
