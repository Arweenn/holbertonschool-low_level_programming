#include "main.h"

/**
 * print_line - draw a straight line
 *
 * Description: function that draws a straight line
 *
 * Return:void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

