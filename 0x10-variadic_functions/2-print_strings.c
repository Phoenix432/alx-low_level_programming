#include "variadic_functions.h"


/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string separator
 * @n: number of arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
