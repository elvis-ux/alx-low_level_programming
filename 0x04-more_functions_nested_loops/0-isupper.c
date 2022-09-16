#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: the characterbto be tested
 * Return: 1 if upper case and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
