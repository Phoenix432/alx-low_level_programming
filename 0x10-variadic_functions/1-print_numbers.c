#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 * @separator: separator to be printed between numbers
 * @n:  number of arguments
 * @...: integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
