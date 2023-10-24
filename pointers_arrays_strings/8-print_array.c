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
	int i;

	i = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && i < n)
		{
			printf("%d", a[i]);
			if (!(a[i + 1] == '\0' || (i + 1) == n))
				printf(", ");
			i++;
		}
		printf("\n");
	}
}
