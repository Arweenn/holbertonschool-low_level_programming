#include <stdio.h>
#include "main.h"

/**
 * _isalpha - lowercase/uppercase checks
 *@c: c is an ascii character
 *
 * Return: 1 if lowercase or uppercase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
