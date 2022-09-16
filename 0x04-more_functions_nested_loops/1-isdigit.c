include "main.h"

/**
 * _isdigit - function that checks for digit
 *
 * @c: the number to be checked
 *
 * Return: 1 if number is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == c)

			return (1);
	}
	return (0);
}
