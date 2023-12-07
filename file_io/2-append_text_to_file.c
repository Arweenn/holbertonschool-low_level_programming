#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file's name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
	}

	fd = open(filename, O_RDWR | O_APPEND, 0664);
	rwr = write(fd, text_content, nletters);
	if (fd == -1 || rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
