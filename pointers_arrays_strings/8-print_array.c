#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of elements of an array
 * @a: array
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, count;

	i = 0;
	count = 1;
	if (n < 0)
		n = 0;
	if (n >= 0)
	{
		while (a[i] != '\0' && count < n)
		{
			printf("%d, ", a[i]);
			i++;
			count++;
		}
		printf("%d\n", a[i]);
	}
}
