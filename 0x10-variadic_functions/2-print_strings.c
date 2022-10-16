#include "variadic_functions.h"

/**
 * print_strings - prints strings,fl]ollowed by newline
 * @separator: string
 * @n: number of string passed
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
