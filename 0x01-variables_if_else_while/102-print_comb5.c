#include<stdio.h>

/**
* main - Entry point
*
* Description - Write a program that prints all possible
* different combinations of two digits
*
* Return: 0 (Succes)
*/

int main(void)
{
	int i = 0, j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i + j != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
