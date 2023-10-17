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
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	printf("\n");
	return (0);
}
