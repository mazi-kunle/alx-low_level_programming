#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main- a function that copies a file to another.
 * @argc: argument count.
 * @argv: array of strings.
 *
 * Return: int.
*/

int main(int argc, char **argv)
{
	char *buf;
	ssize_t rcheck, wcheck;
	int fdto, fdfrom, fdto_close, fdfrom_close;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	fdfrom = open(argv[1], O_RDONLY);
	if (fdto == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(1025);
	while ((rcheck = read(fdfrom, buf, 1024)) != 0)
	{
		if (rcheck == -1)
		{
			free(buf);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		buf[rcheck] = '\0';
		wcheck = write(fdto, buf, rcheck);
		if (wcheck == -1)
		{
			free(buf);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	fdto_close = close(fdto);
	fdfrom_close = close(fdfrom);
	if (fdto_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	if (fdfrom_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	free(buf);
	return (0);
}
