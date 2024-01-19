#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value.
 * @max: max value
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
