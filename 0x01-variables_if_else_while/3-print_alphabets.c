#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char alpha1;
	char alpha2;

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		putchar(alpha1);
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
		putchar(alpha2);
	putchar('\n');
	return (0);
}
