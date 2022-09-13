#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

