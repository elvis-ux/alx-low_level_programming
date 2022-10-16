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
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	memory = atoi(argv[1]);
	if (memory <  0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0; i < memory; i++)
	{
		if (i == memory - 1)
		{
			printf("%02hhx\n", arr[1]);
			break;
		}
		printf("%2hhx\n ", arr[i]);
	}
	return (0);
}
