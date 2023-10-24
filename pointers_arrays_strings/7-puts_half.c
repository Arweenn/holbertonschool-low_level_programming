#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is a string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i;
	j = k / 2;
	while (j <= k)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
