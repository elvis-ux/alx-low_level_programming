#include "main.h"

/**
 * _strstr - loctes a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */

char *_strstr(char *haystack, char needle)
{
	char *results = haystack, *needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}

			if (!*needle)
			{
				return (results);
			}
			needle = fneedle;
			results++;
			haystack = results;
		}
		return (0);
	}
