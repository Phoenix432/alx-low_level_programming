#include "main.h"

/**
 * set_bit - sets value of a bit at the index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if on Success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > sizeof(n) * 8)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
