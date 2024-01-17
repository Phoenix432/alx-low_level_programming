#include "main.h"

/**
 * *_strdup - allocate a string.
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of string character*/
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{

		for (; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
