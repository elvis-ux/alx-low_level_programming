#include "main.h"

/**
 * rot13 - encodes a string
 * @s: input string
 * Return:  string to be encoded
 */

char *rot13(char *s)
{
	int c = 0;
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alpha[i])
			{
				*(s + c) = rot13[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
