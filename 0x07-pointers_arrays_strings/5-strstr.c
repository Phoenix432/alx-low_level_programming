#include "main.h"
#include "stdio.h"

/**
 * *_strstr - function finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to find substring in
 * @needle: pointer
 * Return: pointer to first char of matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
