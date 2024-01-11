#include "main.h"

/**
 * check - check all numbers if they can divide it
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (check(a, b + 1));
}

/**
 * is_prime_number - check if n is a number is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (check(n, 2));
	return (0);
}

