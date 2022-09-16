#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using \ character
 *
 * @n: The number of \ char to be displayed
 */

void print_diagonal(int n)
{
	int line, j;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (j = 0; j < line; j++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
