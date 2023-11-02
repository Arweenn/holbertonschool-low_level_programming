#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num, d, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (d = 0; argv[num][d]; d++)
		{
			if (argv[num][d] < '0' || argv[num][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
