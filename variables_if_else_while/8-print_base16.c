#include <stdio.h>

/**
 * main - print numbers
 *
 * Description : print all single digit numbers, base of 16
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	int i;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);
	return (0);
}
