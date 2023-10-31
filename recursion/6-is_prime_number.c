#include "main.h"

/**
 * is_prime - detects if an input number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number, 0 if n is not a prime number
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n == c)
		return (1);

	else if (n % c == 0)
		return (0);

	else if (n * n == c)
		return (n);

	return (is_prime(n, c + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
