#include "main.h"

/**
 * print_chessboard - pints chessboard
 * @a: 8 by 8 matrix(array)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
