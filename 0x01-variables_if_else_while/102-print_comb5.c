#include <stdio.h>
/**
 * main - printing num comb5
 *
 * Return: 0 Always
 */
int main(void)
{
	int n1, n2, n3, n4 =0;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				for (n4 = n2 +1; n4 <= '9'; n4++)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					putchar(',');
					putchar(' ');
				}
			}
		}
	} putchar('\n');
	return (0);
}
