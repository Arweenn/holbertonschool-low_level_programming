#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *arr;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}


	arr[i] = '\0';


	return (arr);
}
