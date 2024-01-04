#include<stdio.h>



/**
* print_times_table - prints the n time table
*
* @n: take number
*
*/

void print_times_table(int n)
{
	int i, j, prod;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				prod = i * j;

				_putchar(',');
				_putchar(' ');
				if (prod > 9 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + 48);
				}
				else if (prod > 99)
				{
					_putchar((prod / 100)  + 48);
					_putchar(((prod / 10) % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}








