#include<stdio.h>

/**
* main - Entry point
*
* Description - print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*
* Return: 0 (Succes)
*/

int main(void)
{

	int i = 0;
	int j;
	int y;

while (i <= 9)
{
	j = 0;

	while (j <= 9)
	{
		if (i != j && i < j)
		{
			y = 0;
			while (y <= 9)
			{
				if (j != y && j < y)
				{
					putchar (i + 48);
					putchar (j + 48);
					putchar(y + 48);

					if (i + j + y != 24)
					{
						putchar (',');
						putchar (' ');
					}
				}
				y++;
			}
		}
	j++;
	}
	i++;
}
putchar('\n');

	return (0);
}

