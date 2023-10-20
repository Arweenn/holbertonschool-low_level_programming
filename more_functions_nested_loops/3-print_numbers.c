#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: function that prints the numbers from 0 to 9
 *
 * Return:void
 */

void print_numbers(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
