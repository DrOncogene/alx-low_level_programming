#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
  * read_textfile - reads a text file and prints it to the stdout
  * @filename: name of the file
  * @letters: number of letters to be read and printed
  * Return: number of letters able to be read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_char, fd;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fd = read(fd, buf, letters);
	if (fd == -1)
		return (0);

	n_char = write(1, buf, letters);
	if (n_char == -1 || (n_char < fd))
		return (0);

	free(buf);
	close(fd);

	return (n_char);
}
