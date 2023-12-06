#include "main.h"
#include <stdio.h>

/**
 * errors - handle errors
 * @fd_s: source file
 * @fd_d: destination file
 * @argv: array of arguments
 * Return: void
 */

void errors(int fd_s, int fd_d, char *argv[])
{
	if (fd_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_s);
		exit(99);
	}
}

/**
 * main - program that copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	const char *f_from = argv[1];
	const char *f_to = argv[2];
	int fd_s, fd_d;
	char buf[1024];
	ssize_t nrd, nwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_s = open(f_from, O_RDONLY);
	fd_d = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	errors(fd_s, fd_d, argv);

	while ((nrd = read(fd_s, buf, 1024)) > 0)
	{
		nwr = write(fd_d, buf, nrd);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_s);
			close(fd_s);
			close(fd_d);
			exit(100);
		}
	}
	close(fd_s);
	close(fd_d);
	return (0);
}
