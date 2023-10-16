#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description : print the alphabet in lower then uppercase
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
