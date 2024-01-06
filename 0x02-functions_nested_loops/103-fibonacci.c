#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4000000
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, evensum = 0;

	while (1)
	{
		sum = fib1 + fib2;

		fib1 = fib2;
		fib2 = sum;

		if (sum < 4000000)
        {
            if (sum % 2 == 0)
            {
                evensum += sum;
            }
        }
		else
        {
           break;
        }
	}
    printf("%lu", evensum);
	return (0);
}
