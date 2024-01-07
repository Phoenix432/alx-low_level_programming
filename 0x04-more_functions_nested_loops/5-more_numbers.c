#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		  putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	for (int j = 1; j <= 10; j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
	_putchar('\n');
	}
}
