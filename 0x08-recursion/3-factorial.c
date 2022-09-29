#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: number
 * Return: factorial of a number
 */
int factiorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
