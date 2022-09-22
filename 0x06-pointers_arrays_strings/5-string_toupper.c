#include "main.h"

/**
 * string_toupper - changing lowcase letters of a string to uppercase
 *
 * @n: string to check
 *
 * Return: Uppercase string
 */
char string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 97 && n[j] <= 122)
			n[j] = n[j] - 32;

		else
			continue;
	}
	return (n);
}
