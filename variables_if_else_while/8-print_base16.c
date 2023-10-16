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
	int num;

	for (num = 0; num <= 15; num++)
	{
		printf("%x", num);
	}

	printf("\n");
	return (0);
}
