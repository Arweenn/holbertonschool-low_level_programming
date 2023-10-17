#include <stdio.h>
/**
 * main - print _putchar
 *
 * Description : print _putchar
 *
 * Return: Always  0 (Success)
 */

int print_alphabet(void)
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
