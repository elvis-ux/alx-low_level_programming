#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if any number contains a non-digit symbol else 0
 */

int main(int argc, char **argv)
{
	int j, n, sum = 0;

	char *flag;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (j = 1; argv[j]; j++)
	{
		n = strtol(argv[j], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
