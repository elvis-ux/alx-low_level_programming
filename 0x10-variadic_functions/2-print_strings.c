#include "variadic_functions.h"

/**
 * print_strings - prints strings,fl]ollowed by newline
 * @separator: string
 * @n: number of string passed
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	int *ptr = malloc(sizeof(int) = n);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			ptr[i] = 1;
		else
			ptr[i] = 0;
	}
	va_end(ap);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (ptr[i] == 1)
			printf("(nil");
		else
			printf("%s", va_arg(ap, char *));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
