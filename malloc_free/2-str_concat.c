#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *arr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	len3 = len1 + len2;

	arr = (char *) malloc(len3 * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (i = 0; i < len2; i++)
		arr[i + len1] = s2[i];

	return (arr);
}
