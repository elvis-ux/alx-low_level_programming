#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 * Return: capatilize string
 */
char *cap_string(char *s)
{
	int j = 0;
	int i;
	int cap_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + j) >= 97 && *(s + j) <= 122)
		*(s + j) = *(s + j) - 32;
	j++;
	while (*(s + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + j) == cap_words[i])
			{
				if ((*(s + (j + 1)) >= 97) && (*(s + (j + 1)) <= 122))
					*(s + (n + 1)) = *(s + (j + 1)) - 32;
						break;
						}
						}
						j++;
						}
						return (s);
}
