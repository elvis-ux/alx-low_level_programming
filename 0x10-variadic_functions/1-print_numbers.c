#include "variadic_functions.h"

/**
 * print_numbers - prints numbers,followed by a line
 * @separator: string to separate the number
 * @n: number of int passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
