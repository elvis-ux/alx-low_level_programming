#include "main.h"
/**
 * _abs - displays the absolute value of an input
 *
 * @n: integer input
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);


	else
	{
		n *= -1;
		return (n);
	}
}
