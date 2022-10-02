#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if two arguments arre supplied else 1
 */

int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
