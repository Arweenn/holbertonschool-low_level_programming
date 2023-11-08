#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	a = arr;
	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (arr);
}
