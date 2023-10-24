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
	k = 0;
	while (str[i] != '\0')
	{
		k++;
		i++;
	}
	if (k % 2 == 0)
	{
		j = k / 2;
	}
	else
	{
		j = (k + 1) / 2;
	}
	while (j < k)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
