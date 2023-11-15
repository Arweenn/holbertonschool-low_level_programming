#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: integer array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: if size <= 0, return -1
 *	if no match, return -1
 *	index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result == 1)
			return (i);
	}
	return (-1);
}
