#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description : print alphabet in lowercase + reverse
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	int i;

	i = 122;

	while (i > 97 && i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
