#include "main.h"

/**
 * power_operation - returns the narural sqrt root
 * @n: number
 * @a: iterator
 * Return: n's square root
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
 * _sqrt_recursion - return natural square root
 * @n: number
 * Return: n's squart root
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
