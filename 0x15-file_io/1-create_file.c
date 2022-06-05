#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file- a function that creates a file.
 * @filename: file to be created.
 * @text_content: string to write.
 *
 * Return: 1 o sccess, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fd2;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fd2 = write(fd, text_content, strlen(text_content) + 1);
		if (fd2 == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
