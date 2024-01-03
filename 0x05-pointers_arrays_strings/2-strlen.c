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
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
