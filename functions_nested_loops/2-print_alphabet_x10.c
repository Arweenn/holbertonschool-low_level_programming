#include <stdio.h>
/**
  print_alphabet_x10 - print alphabet x10
 *
 * Description : print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++);
		{
			_putchar(c);
		}
		-putchar("\n");
	}
}
