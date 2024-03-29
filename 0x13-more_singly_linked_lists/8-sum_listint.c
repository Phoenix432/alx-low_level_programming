#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: address to first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
