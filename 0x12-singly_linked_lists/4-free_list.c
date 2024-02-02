#include "lists.h"

/**
 * free_list - frees all nodes of linked list
 * @head: pointer to head node
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
