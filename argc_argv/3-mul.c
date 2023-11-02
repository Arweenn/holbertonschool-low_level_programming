#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

