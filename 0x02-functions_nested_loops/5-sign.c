#include "main.h"
/**
 * print_sign - should print sign of a no
 *
 * @n:test for integer
 *
 * Return: 1 for +ve no, -1 for -ve no and 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
