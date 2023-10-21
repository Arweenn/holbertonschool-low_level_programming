#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times
 *
 * Description: function that draws a diagonal line
 *
 * Return:void
 */

void print_diagonal(int n)
{
	int s;
	int l = 0;

	if (n > 0)
	{
		while (l < n)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}

	else
	{
		_putchar('\n');
	}
}
