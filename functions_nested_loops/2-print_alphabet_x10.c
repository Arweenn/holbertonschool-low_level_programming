#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Description : print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar("\n");
	i++;
	}
}
