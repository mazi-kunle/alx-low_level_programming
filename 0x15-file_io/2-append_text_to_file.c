#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file- a function that appends text at the
 * end of a file.
 * @filename: parameter.
 * @text_content: parameter.
 *
 * Return: int.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;
	ssize_t fd2;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		count = strlen(text_content);
		fd2 = write(fd, text_content, count);
		if (fd2 == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

