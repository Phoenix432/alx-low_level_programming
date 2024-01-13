#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int l, i = 0;

	/*find the size of dest array*/
	for (l = 0; dest[l] != '\0'; ++l)
		;

	/* iterate through each src array value without the null byte*/
	while (src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	return (dest);
}
