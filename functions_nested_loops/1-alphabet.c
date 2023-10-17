#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description : print alphabet in lowercase
 *
 * Return: Always  0 (Success)
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
	return (0);
}
