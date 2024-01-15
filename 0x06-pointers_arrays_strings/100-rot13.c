#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i = 0, j;
	char *ptr = s;
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		j = 0;
		while (rot1[j])
		{
			if (s[i] == rot1[j])
			{
				s[i] = rot2[j];
				break;
			}
			j++;
		}
		i++;
	}
	ptr = s;
	return (ptr);

}
