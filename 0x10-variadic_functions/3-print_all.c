#include "variadic_functions.h"

/**
 * print_all - function that prints everything
 * @format: string format
 * Return: void
 */

void print_all(const char * const format, ...);
{
	va_list ap;
	int i = 0, j, c = 0;
	char *str;
	const char arr[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j])
		{
			if (arr[j] == format[i] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%i", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				ptr = va_arg(ap, char*), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n"), va_end(ap);
}
