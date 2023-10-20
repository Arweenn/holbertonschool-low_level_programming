#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Description: function that prints the numbers from 0 to 9 without 2 and 4
 *
 * Return:void
 */

void print_most_numbers(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
