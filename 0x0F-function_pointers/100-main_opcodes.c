#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its own function
 * @argc: num of arguments
 * @argv: vector
 * Return: successful
 */

int main(int argc, char *argv[])
{
	int i, memory;
	char *op = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	memory = atoi(argv[1]);

	if (memory < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < memory; i++)
	{
		printf("%02x" op[i] & 0xFF);
		if (i != memory - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
