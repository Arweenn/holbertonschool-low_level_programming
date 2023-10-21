#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int l = 0;
	int s;
	int h;

	if (size > 0)
	{
		while (l < size)
		{
			for (s = size - 1; s > l; s--)
			{
				_putchar(' ');
			}
			for (h = 0; h < l + 1; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
