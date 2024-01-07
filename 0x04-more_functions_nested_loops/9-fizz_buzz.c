#include"main.h"


/**
* main - multiples of three print Fizz ,
*	multiples of five print Buzz
*	both three and five print FizzBuzz.
*	separated by a space
* Return: 0
*/


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}


