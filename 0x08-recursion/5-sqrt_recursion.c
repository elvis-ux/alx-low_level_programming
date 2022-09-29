#include "main.h"

/**
 * _sqrt - returns the narural sqrt root
 * @n: number
 * @y: buffer
 * Return: n's square root
 */

int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}
