#include "main.h"

int len(char *s);
/**
  * create_file - creates a file with a given text
  * @filename: name of the file
  * @text_content: content of the file
  * Return: 1 on success, -1 otherwise
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len(text_content));
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}

/**
  * len - computes the length of a string
  * @s: the string
  * Return: len of s
  */
int len(char *s)
{
	if (s == NULL || *s == 0)
		return (0);

	return (len(s + 1) + 1);
}
