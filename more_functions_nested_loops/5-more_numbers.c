#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Description: function that prints 10 times the numbers
 *
 * Return:void
 */

void more_numbers(void)
{
	int a;
	int n = 0;

	for (; n < 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
