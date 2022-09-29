#include "main.h"

/**
 * is_prime - checks if an input number is a prime number.
 * @n: number
 * @a: iterator
 * Return: 1 if n is prime and 0 if n is not prime
 */

int is_prime(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, a + 1));
}

/**
 * is_prime_number - checks if an input number is a prime number
 * @n: number.
 * Return: 1 if n is prime and 0 if n is not prime
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
