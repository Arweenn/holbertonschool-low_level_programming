#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description : print the alphabet in lowercase, without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
