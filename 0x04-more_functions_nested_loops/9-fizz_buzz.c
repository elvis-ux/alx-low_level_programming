#include <stdio.h>

/**
 * main - prints number 1 to 100 and a new line
 * multiple of three prints Fizz instead of the number and
 * for the multiples of five print Buzz.
 * for numbers which are multiples of both three and five print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
			printf("%d", i);
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
