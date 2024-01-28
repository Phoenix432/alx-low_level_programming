#include "main.h"

/**
* wordcount - counts the number of words
* @s: str
*
* Return: int
*/
int wordcount(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	return (n);
}
/**
 * _getword - move adress to remove trailig whitespaces
 * @s: string
 *
 * Return: Pointer to adress with non space
 */
char *_getword(char *s)
{
	while (*s == ' ')
		s++;
	return (s);
}
/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: Double Pointer
 */
char **strtow(char *str)
{
	char **s, *gw;
	int l, wc, i, j, cr, k;

	if (str == NULL || *str == 0)
		return (0);

	cr = 0;
	wc = wordcount(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	gw = _getword(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(gw + l) != ' ' && *(gw + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			cr = 1;
			break;
		}
		for (j = 0; j < l; j++)
			s[i][j] = *(gw + j);
		s[i][j] = '\0';
		gw = _getword(gw + l);
	}
	s[i] = NULL;
	if (cr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
