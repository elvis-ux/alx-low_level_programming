#include "main.h"

/**
 * power_operation -nreturns the narural sqrt root
 * @n: munber
 * @a: iterator
 * Return: sqrt root or -1
 */

int power_operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt root
 * @n: number
 * Return natural sqrt root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
