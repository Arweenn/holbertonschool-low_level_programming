#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: integer a
 * @b: integer b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
