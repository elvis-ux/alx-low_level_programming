#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int ascend;

	for (ascend = '0'; ascend <= '9'; ascend++)
	{
		putchar(ascend);

		if (ascend != '9')
		{
			putchar(',');
			putchar(' ');
		}
	} purchar('\n');
	return (0);
