#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: 2d array of int types.
 * @size: size of array
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int *p = a;
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = a;
		sum1 += *(p + i);
		sum2 += *(p + size - i - 1); /* a[size - i - 1]; */
		a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
