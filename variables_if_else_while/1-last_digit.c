#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %10 and is greater than 5\n", n);
	if (n == 0)
		printf("Last digit of %d is %10 and is 0\n", n);
	if ((n < 6) && (n != 0))
		printf("Last digit of %d is %10 less than 6 and not 0\n", n);
	return (0);
}
