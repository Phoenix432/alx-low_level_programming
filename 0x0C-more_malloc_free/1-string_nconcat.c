#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: Number of bytes.
 *
 * Return:Pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, s1_len, s2_len;

	/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length of the strings*/

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/*Memory reservation-for case 1 & 2.*/
	s = malloc(s1_len + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	/*Copy first string into s.*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/*copy second stringg into s.*/
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
