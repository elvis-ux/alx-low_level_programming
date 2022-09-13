#include <stdio.h>
/**
 * main - printing combo num
 *
 * Return: 0 Always
 */
int main(void)
{
	int num1, num2, num = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++, num++)
		{
			if (num > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(num1);
			putchar(num2);
		}
	} putchar('\n');
	return (0);
}
