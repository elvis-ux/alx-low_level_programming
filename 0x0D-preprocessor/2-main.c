#include <stdio.h>

/**
 * main - prints from the file it it compiled from
 * Return: void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
