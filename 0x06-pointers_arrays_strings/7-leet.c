#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: String
 * Return: string that is encoded
*/

char *leet(char *s)
{
	char *ptr = s;
	char s1[] = "43071";
	char s2[] = "aeotl";
	char s3[] = "AEOTL";
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == s2[j] || s[i] == s3[j])
			{
				s[i] = s1[j];
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
