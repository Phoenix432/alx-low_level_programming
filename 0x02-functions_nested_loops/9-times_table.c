#include"main.h"


/**
* times_table - prints the 9 times table
*
*/

void times_table(void)
{
int i, j;
int t = 0;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		t = i * j;
		if (t > 9)
		{
			_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
		}
		else
		{
			_putchar((i * j) + 48);
		}
		if (j != 9)
		{
			_putchar('.');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

}







