#include "main.h"
/**
 * puts2 - prints alternating characters of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[j]);

		j++;
	}
	_putchar('\n');
}
