#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: integer
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
