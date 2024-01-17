#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **s, i, j;

	s = malloc(sizeof(*s) * height);

	if (width <= 0 || height <= 0 || s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			s[i] = malloc(sizeof(**s) * width);
			if (s[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(s[i]);
				free(s);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				s[i][j] = 0;
		}
	}

	return (s);
}
