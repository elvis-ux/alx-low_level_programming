#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, initialize it with
 * a specific char
 * @size: size of the array
 * @arr: char
 * Return: null if size is 0
 */

char *create_array(unsigned int size, char arr)
{
	char *array_value = malloc(size * sizeof(char));

	unigned int j;

	if (size == 0 || array_value == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arraay_value[j] = arr;
	return (array_value);
}
