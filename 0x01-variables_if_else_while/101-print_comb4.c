#include <stdio.h>
/**
 * main - printing combo num2
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int num1, num2, num3, num = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			for (mun3 = num2 + 1; num3 <= ' 9'; num3++, num++)
			{
				if (n > 0)
					{
						putchar(',');
						putchar(' ');
					}
				putchar(num1);
				putchar(num2);
				putchar(num3);
			}
		}
	}
	putchar('\n');
	return (0);
