#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: buffer size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m, n, o;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8X:", m);
			for (n = m; n < m + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x:", *(b + n));
				else
					printf(" ");
			}
			printf(" ");
			for (o = m; o < m + 10; o++)
			{
				if (o >= size)
					break;
				if (*(b + o) < 32 || *(b + o) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + o));
			}
			printf("\n");
		}
	}
}
