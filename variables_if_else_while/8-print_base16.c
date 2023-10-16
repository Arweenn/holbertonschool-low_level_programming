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

	while (i = 0 && i <= 15)
	{
		printf("%x", i);
		i++;
	}

	printf("\n");
	return (0);
}
