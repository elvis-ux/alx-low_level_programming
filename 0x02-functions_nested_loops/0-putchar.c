#include "main.h"
/**
 * main - Entry point
 * Description: print _putchar and a new line
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";
	int j = 0;

	while (j < 8)
	{
		_putchar(c[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}
