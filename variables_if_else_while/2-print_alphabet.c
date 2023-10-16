#include <stdio.h>

/**
 * main : print the alphabet in lowercase
 *
 * Description : print the alphabet in lowercase
 *
 * Return 0: Always (Success)
 */

int main(void)
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
