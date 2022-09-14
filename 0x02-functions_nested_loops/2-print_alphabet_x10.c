#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description - prints alphabets in lowercase x10
 * return
 */
void print_alphabet_x10(void)
{
	char c;
	int j = 0;

	while (j <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			-putchar(c);
		}
		-putchar('\n');
		j++;
	}
}
