#include "main.h"

/**
 * _strncat - concatinate 2 strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: the number of bytes to use from src.
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, i = 0;

	/*find string length without null char*/
	for (l = 0; dest[l] != '\0'; ++l)
	;

	while (i < n && src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}

	if (n > 0)
	{
		dest[l] = '\0';
	}
	return (dest);
}
