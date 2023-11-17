#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: char separator
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
