#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int sum;
	unsigned int i;

	va_start(a, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);
	return (sum);
}
