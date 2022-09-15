#include <stdio.h>
/**
 * main - print the sum of all multiple
 * of 3 or 5 below 1024
 *Return: 0 Always
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int j;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (j = 0; j < 1024; ++j)
	{
		if ((j % 3) == 0)
		{

			sum3 = sum3 + j;
		}
		else if ((j % 5) == 0)
		{
			sum5 = sum5 + j;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
