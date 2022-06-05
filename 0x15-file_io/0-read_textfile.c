#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters: number of characters to be read.
 *
 * Return: number of letters it coult read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fd2;

	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	
	buf = malloc(sizeof(char) * (letters + 1));
	fd2 = read(fd, buf, letters);
	if (fd2 == -1)
	{
		return (0);
	}
	buf[fd2] = '\0';

	write(STDOUT_FILENO, buf, fd2);
	close(fd);
	free(buf);
	return (fd2);
}
