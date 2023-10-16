#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * Description : print all single digit numbers, base of 10 from 0
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
