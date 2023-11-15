#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two integers
 * @a: integer a
 * @b: integer b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - difference of two integers
 * @a: integer a
 * @b: integer b
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - product of two integers
 * @a: integer a
 * @b: integer b
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - result of a division of two integers
 * @a: integer a
 * @b: integer b
 * Return: result of a division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - remainder of the division
 * @a: integer a
 * @b: integer b
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
