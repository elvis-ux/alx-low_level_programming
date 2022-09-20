#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 * @a: arrays of integer
 * @n: number of elements of an array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	prinf("\n");
}
