#include "main.h"
#include <stdlib.h>

int check_num(char *s);
int len(char *s);
char *multiply(char *num, char *n, int len_res, int pos);
char *infinite_add(char **ar, int len_ar, int size);
void print(char *s);
/**
 * main - prints the result of the multiplication of two arguments
 * @argc: arg count
 * @argv: args vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *n1, *n2, *n1_hold, **rs;
	int len1, len2, len1_hold, len_r, i;

	n1 = argv[1];
	n2 = argv[2];
	n1_hold = n1;
	len1 = len(n1);
	len2 = len(n2);
	len1_hold = len1;
	len_r = len1 + len2 + 1;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	if (check_num(n1) == 0 || check_num(n2) == 0)
	{
		print("Error");
		exit(98);
	}

	if (len2 > len1)
	{
		n1 =  n2;
		n2 = n1_hold;
		len1 = len2;
		len2 = len1_hold;
	}

	rs = malloc(sizeof(int) * len2 * 2);
	if (rs != NULL)
	{
		for (i = 0; i < len2; i++)
			*(rs + i) = multiply(n1, (n2 + len2 - 1 - i), len_r, i);
	}
	/*
	 * for (i = 0; i < len2; i++)
	 *	printf("%s\n", *(rs + i));
	 */
	return (0);
}

/**
 * check_num - checks if s contains only numbers
 * @s: the string
 * Return: 1 if s has only numbers, 0 otherwise
 */
int check_num(char *s)
{
	if (*s == 0)
		return (1);
	if (*s < '0' || *s > '9')
		return (0);
	else
		return (check_num(s + 1) * 1);
}

/**
 * len - finds the length of a string
 * @s: the string
 * Return: length of s
 */
int len(char *s)
{
	if (*s == 0)
		return (0);
	return (len(s + 1) + 1);
}

/**
 * multiply - multiplies num and n
 * @num: first num (the longer of the two)
 * @n: second num (a single digit)
 * @len_res: fixed length of the result, empty points are filled with 0's
 * @pos: offset from the end of the result
 * Return: pointer to the result
 */
char *multiply(char *num, char *n, int len_res, int pos)
{
	char *res;
	int i, carry, mul, offset;

	offset = len_res - pos - 1;
	res = calloc(len_res, sizeof(char));
	for (i = 0; i < len_res; i++)
		*(res + i) = '0';
	if (res != NULL)
	{
		carry = 0;
		mul = 0;
		for (i = 1; i <= len(num); i++)
		{
			mul = ((*(num + len(num) - i) - '0') * (*n - '0')) + carry;
			carry = mul / 10;
			*(res + offset - i) = (mul % 10) + '0';
		}
		if (carry > 0)
		{
			*(res + offset - i) = carry + '0';
			*(res + len_res - 1) = '\0';
		}
		else
			*(res + len_res - 1) = '\0';

	}

	return (res);
}

/**
 * print - print a string
 * @s: the string
 * Return: nothing
 */
void print(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
}
