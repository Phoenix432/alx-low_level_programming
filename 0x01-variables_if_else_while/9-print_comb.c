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
	int n = 48; /*48; decimal rep of 0*/

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}

