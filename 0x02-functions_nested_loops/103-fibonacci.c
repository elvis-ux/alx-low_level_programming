#include <stdio.h>
/**
 * main - finds and prints sum ofthe even valued terms
 * and a new line
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long int j, k, n, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("lu\n", sum);
	return (0);
}
