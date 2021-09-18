#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication of two arguments
 * @argc: represents the number of arguments passed
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int add, i;
	char *curr_num;

	add = 0;
	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			curr_num = argv[i];
			while (*curr_num != 0)
			{
				if (*curr_num < 48 || *curr_num > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
				curr_num++;
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
