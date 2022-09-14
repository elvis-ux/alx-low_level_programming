#include "main.h"
/**
 * _isalpha - checks for alpha char
 *
 * @c:Checks for characters
 *
 * Return: 1 for alpha char (lower or upper) and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
