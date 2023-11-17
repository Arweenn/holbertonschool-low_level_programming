#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: A string of characters
 * @...: A variable number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int num, i = 0;
	double dbl;
	char c;

	va_start(args, format);
	while (format && format[i])
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				dbl = va_arg(args, double);
				printf("%f", dbl);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
				i++;
		}
	va_end(args);
	printf("\n");
}
