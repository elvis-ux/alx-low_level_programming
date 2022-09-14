#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to be checked
 *
 * Return: the vlue of the last number digit
 */
int print_last_digit(int n)
{
	int ls;

	ls = n % 10;

	if (ls < 0)
	{
		ls = ls * -1;
	}

	putchar(ls + '0');

	return (ls);
}
