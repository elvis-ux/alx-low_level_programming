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

	for (i = 1; i <= 50; ++1)
	{
		if (j != 20365011074)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d\n", j);

		}
		n = j + k;
		j = k;
		k = n;
	}
	return (0);
}
