#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: int array pointer
 * @size: array size
 * @cmp: pointer to the function to be
 * used
 * Return: index of the 1st element for which
 * the cmp does not return 0,if no element
 * matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && size <= 0 && cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
