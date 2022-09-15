#include <stdio.h>
/**
 *main - printing the first 50 fibonacci number
 *followed by a new line
 *Return: 0 Always
 */
int main(void)
{
	long int i, j, k, n;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);

		}
		n = j + k;
		j = k;
		k = n;
	}
	return (0);
}
