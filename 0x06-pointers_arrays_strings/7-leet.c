#include "main.h"

/**
 *  leet - encoding a string to 1337
 *  @s: string to be formatted
 *
 *  Return: formatted strings
 */

char *leet(char *s)
{
	char n[] = {65, 52, 69, 51, 79, 48, 55, 76, 49};

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (s[i] == n[j] || s[i] == n[j] + 32)
				s[i] = n[j + 1];
		}
	}
	return (s);
}
