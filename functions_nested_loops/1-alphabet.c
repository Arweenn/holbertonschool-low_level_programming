#include <stdio.h>
/**
 * print_alphabet - print alphabet
 *
 * Description : print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
}
