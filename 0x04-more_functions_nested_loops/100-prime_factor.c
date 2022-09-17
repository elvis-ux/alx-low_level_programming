#include <stdio>

/**
 * main - prints largest prime factor of the number 612852475143
 * Return: Always 0.
 */

int main(void)
{
	long int nu, i;

	nu = 612852475143;
	for (i = 2; i < nu; i++)
	{
		if (nu % i == 0)
		{
			nu /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
