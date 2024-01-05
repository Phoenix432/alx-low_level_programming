#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 seperated by (, )
 *      followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, tmp;

	for (i = 1; i <= 50; i++)
	{
		tmp = b;
		b = a + tmp;
		a = tmp;

		printf("%lu", b);

		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
