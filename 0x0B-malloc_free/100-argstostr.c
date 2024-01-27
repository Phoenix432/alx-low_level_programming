#include "main.h"

/**
 * _getlen - get lentgth of the string
 * @s: string
 * Return: int
 */

int _getlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
	;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program.
 *	Each argument should be followed by a \n.
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j, n1 = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, n1++)
		n1 += _getlen(av[i]);

	s = malloc(sizeof(char) * n1 + 1);

	if (s == 0)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
		{
			s[count] = av[i][j];
		}

		s[count] = '\n';
		count++;
	}
	s[count] = '\0';

	return (s);
}
