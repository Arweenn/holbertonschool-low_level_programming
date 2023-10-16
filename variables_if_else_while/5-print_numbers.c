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

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
