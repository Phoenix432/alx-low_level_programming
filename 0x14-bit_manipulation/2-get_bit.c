#include "main.h"

/**
 * get_bit - get the value of a bit at an index
 * @n: number to evaluate
 * @index: bit to get
 * Return: Value of bit at index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > sizeof(n) * 8)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
