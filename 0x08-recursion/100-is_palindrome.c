#include "main.h"

/**
 * leng - returns the length of string with the null char
 * @a: pointer to the string
 * Return: int
 */


int leng(char *a)
{
	int n = 0;

	if (*a > '\0')
		n += leng(a + 1) + 1;
	return (n);
}

/**
 * check - check process
 * @a: string
 * @l: length of the string
 *
 * Return: 1 or 0
 */

int check(char *a, int l)
{
	if (*a == 0)
		return (1);
	else if (*a != *(a + l))
		return (0);
	return (check(a + 1, l - 2));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int l;

	l = leng(s);
	return (check(s, l - 1));
}
