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
	int c;

	for (c = 0; s[c] != '\0'; c++)
		return (c);
}
