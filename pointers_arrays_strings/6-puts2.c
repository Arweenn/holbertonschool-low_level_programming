#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first
 * @str: is a string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);

		if (str[i + 1] == '\0')
			break;
	}
	_putchar('\n');
}
