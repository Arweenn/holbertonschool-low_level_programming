#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if number is greater than 5, less than 6 or 0
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
