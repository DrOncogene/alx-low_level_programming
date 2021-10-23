#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if defined(__LP64__)
#define ElfW Elf64_Ehdr
#else
#define ElfW Elf32_Ehdr
#endif

/**
  * main - display the elf header information of an elf file
  * @argc: arg count
  * @argv: arg vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int fd, fd_out;
	ElfW header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: unable to open file %s\n", argv[1]);
		exit(98);
	}

	if(read(fd, &header, sizeof(header)) == -1)
	{
		dprintf(2, "Error: unable to read file %s\n", argv[1]);
		exit(98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(2, "Error: %s is not an elf file\n", argv[1]);
		exit(98);
	}

	fd_out = open("head", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	write(fd_out, &header, 1000);
	printf("%lu\n", sizeof(header));
	printf("%s\n", header.e_ident);

	return(0);
}

