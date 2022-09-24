#include "main.h"

/**
 * print_number - prints integer
 * @n: integer input
 * Return: void
 */
void print_number(int n)
{
	unsigned int b, c, d;

	if (n < 0)
	{
		_putchar(45);
		b = n * -1;
	}
	else
	{
		b = n;
	}
	c = b;
	d = 1;

	while (d > 9)
	{
		c /= 10;
		d *= 10;
	}

	for (; d >= 1; d /= 10)
	{
		_putchar(((b / d) % 10) + 48);
	}
}
