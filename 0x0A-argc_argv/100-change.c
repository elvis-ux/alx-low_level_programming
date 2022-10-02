#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun numbers of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if number of arguments passed is not 1 else 0
 */

int main(int argc, char *argv[])
{
	int c;
	int numberOfCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	for (i = 0; c && i < 5; i++)
		while (c && !(c - coins[i] < 0))
		{
			c -= coins[i];
			numberOfCoins++;
		}
	printf("%d\n", numberOfCoins);
	return (0);
}
