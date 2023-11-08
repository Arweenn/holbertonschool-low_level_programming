#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int diff, *arr, i;

	if (min > max)
		return (NULL);

	diff = max - min + 1;
	arr = malloc(diff * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
