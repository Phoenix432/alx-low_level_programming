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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			t = i * j;
			if (t > 9)
			{
				_putchar(' ');
				_putchar((t / 10) + 48);
				_putchar((t % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(t  + 48);

			}

		}
	_putchar('\n');
	}

}







