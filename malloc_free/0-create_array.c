#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character to initialize array with
 * Return: NULL if size = 0, a pointer or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}

		return (a);
	}
	else
		return (NULL);
}
