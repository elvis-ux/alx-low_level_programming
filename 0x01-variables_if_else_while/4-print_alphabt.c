#include <stdio.h>
/**
 * main - printing alphabt
 *
 * Return: 0 always
 */
int main(void)
{
	char set;

	for (set = 'a'; set <= 'z'; set++)
	{
		if ( set == 'e'|| set == 'q')
			continue;
		else
			putchar(set);
	} putchar('\n');
	return (0);
}
