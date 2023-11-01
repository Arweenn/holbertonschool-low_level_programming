#include <stdio.h>

/**
 * main - print the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
