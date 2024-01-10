#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	return (c);
}
