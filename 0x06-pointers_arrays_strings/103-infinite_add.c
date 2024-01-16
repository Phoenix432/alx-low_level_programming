#include "main.h"

/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result length
 * Return: sum of n1 + n2
 *
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* local variable declaration */
	int i = 0, j = 0, k, c = 0, l = 0, m, n;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			m = n1[i] - '0';
		else
			m = 0;
		if (j >= 0)
			n = n2[j] - '0';
		else
			n = 0;
		r[k] = (m + n + c) % 10 + '0';
		c = (m + n + c) / 10;
	}
	if (c == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = c + '0';
	}
	return (r);
}
