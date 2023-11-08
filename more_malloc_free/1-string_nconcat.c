#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - gets string length
 * @str: string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}


/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: strin 2
 * @n: integer
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lenc, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		lenc = len1 + len2 + 1;
	else
	{
		lenc = len1 + n + 1;
		len2 = n;
	}

	str = malloc(lenc);

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';
	return (str);
}
