#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
