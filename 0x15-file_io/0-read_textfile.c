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
	ssize_t char_r, char_w, fd;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char_r = read(fd, buf, letters);
	if (char_r == -1)
		return (0);

	char_w = write(STDOUT_FILENO, buf, letters);
	if (char_w == -1 || (char_w < char_r))
		return (0);

	free(buf);
	close(fd);

	return (char_w);
}
