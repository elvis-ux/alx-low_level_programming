#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates arrsy of integers
 * @min: minimum value of array
 * @max:maximum value of array
 * Return: pointer to created array if successful
 */

int *array_range(int min, int max)
{
	int range, i = 0, *ptr;

	if (main > max)
		return (NULL);
	range = max - min;
	ptr = malloc((range + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (range = min; range <= max; range++)
		ptr[i++] = range;

	return (ptr);
}
