#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int copy(int from, int to, char *buff, int n_read);
/**
  * main - copies the content of a file to another file
  * @argc: arg count
  * @argv: arg vector
  * Return: 97, 98, 99 or 100 if it fails, 0 on success
  */
int main(int argc, char *argv[])
{
	char *buff;
	int fd_fro, fd_to, n_read, n_write;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = malloc(sizeof(char) * 1024);
	fd_fro = open(argv[1], O_RDONLY);
	n_read = read(fd_fro, buff, 1024);
	if (access(argv[1], F_OK) != 0 || fd_fro == -1 || n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	n_write = copy(fd_fro, fd_to, buff, n_read);
	free(buff);
	if (fd_to == -1 || n_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(fd_fro) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fro);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fro);
		exit(100);
	}

	return (0);
}

/**
  * copy - copies the content of a file to another using a buffer
  * @from: source
  * @to: destination
  * @buff: buffer
  * @n_read: number of char initially read
  * Return: the return value of write
  */
int copy(int from, int to, char *buff, int n_read)
{
	int n_write;

	while (n_read == 1024)
	{
		n_write = write(to, buff, 1024);
		n_read = read(from, buff, 1024);
	}

	n_write = write(to, buff, n_read);

	return (n_write);
}
