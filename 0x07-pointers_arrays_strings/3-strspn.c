#include "main.h"
/**
 * _strspn - gets the length of prefixes substring
 * @s: strind to be searched
 * @accept: stings to be searched
 * Return: number of bytes in the initial segment
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ct = 0, supposed_ct = 0;

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				ct++;
		}
		supposed_ct++;

		if (ct == 0 || ct != supposed_ct)
			break;
	}
	return (ct);
}
