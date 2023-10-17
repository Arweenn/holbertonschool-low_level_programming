#include <stdio.h>
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
	char c;
	int i = 0;

	for (; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
