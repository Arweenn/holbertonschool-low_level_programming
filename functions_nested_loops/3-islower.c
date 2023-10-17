#include <stdio.h>
#include "main.h"

/**
 * main - lowercase checks
 *
 * Description: check if there is a lowercase character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
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
