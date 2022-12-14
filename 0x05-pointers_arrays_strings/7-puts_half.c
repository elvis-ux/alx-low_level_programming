#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of a string
 * @s: pointer to the string var s
 * Return: null
 */

void puts_half(char *s)
{
	int len = strlen(s), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(s[i]);
	}
	else
	{
		for (i = len / 2 + 1; i < len; i++)
			_putchar(s[i]);
	}
	_putchar('\n');
}
