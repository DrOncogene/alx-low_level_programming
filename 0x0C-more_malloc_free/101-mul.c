#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int check_num(char *s);
int len(char *s);
char *multiply(char *num, char *n, int len_res, int pos);
void infinite_add(char **in, char *out, int len_in, int size_out);
void add(char *num1, char *num2, int len);
void print(char *s);
int zero_check(char *num);
/**
 * main - prints the result of the multiplication of two arguments
 * @argc: arg count
 * @argv: args vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *n1, *n2, *n1_hold, **res_p, *res;
	int len1, len2, len1_hold, len_r, i;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}

	n1 = argv[1];
	n2 = argv[2];
	n1_hold = n1;
	len1 = len(n1);
	len2 = len(n2);
	len1_hold = len1;
	len_r = len1 + len2 + 1;

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

	if (zero_check(n1) == 0 || zero_check(n2) == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	res_p = malloc(sizeof(int) * len2 * 2);
	if (res_p != NULL)
		for (i = 0; i < len2; i++)
			*(res_p + i) = multiply(n1, (n2 + len2 - 1 - i), len_r, i);

	res = malloc(sizeof(char) * len_r);
	if (res != NULL)
	{
		infinite_add(res_p, res, len2, len_r - 1);
		print(res);
	}
	for (i = 0; i < len2; i++)
		free(*(res_p + i));
	free(res_p);
	free(res);

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
 * multiply - multiplies num and n, where num is the longer of the
 * two args passed and n is a single digit from the shorter arg
 * @num: first num
 * @n: second num
 * @len_res: fixed length of the result, empty points are filled with 0's
 * @pos: offset from the end of the result, reflects the position
 * of n in the shorter argument
 * Return: pointer to the result
 */
char *multiply(char *num, char *n, int len_res, int pos)
{
	char *res;
	int i, carry, mul, offset;

	offset = len_res - pos - 1;
	res = malloc(sizeof(char) * len_res);
	if (res != NULL)
	{
		for (i = 0; i < len_res; i++)
			*(res + i) = '0';
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
 * infinite_add - add all results of initial multip pointed to by pointers
 * saved in **in, each result of length size_out
 * @in: a collection of pointers to results of initial multiplications
 * @out: buffer to save the result in
 * @len_in: number of results in **in, equal to the number of digits
 * in the shortest of the two arg passed to the program
 * @size_out: size of the *out buffer to save the result in
 * Return: nothing
 */
void infinite_add(char **in, char *out, int len_in, int size_out)
{
	int i;
	char *num2;

	for (i = 0; i < size_out; i++)
		*(out + i) = *(*in + i);
	*(out + size_out) = '\0';

	for (i = 1; i < len_in; i++)
	{
		num2 = *(in + i);
		add(out, num2, size_out);
	}
}

/**
 * add - adds num1 and num2 each of length len and save the result in num1
 * @num1: first number, also where the result is saved
 * @num2: second number
 * @len: length of num1 and num2
 * Return: nothing
 */
void add(char *num1, char *num2, int len)
{
	int i, sum, carry;

	sum = 0;
	carry = 0;
	for (i = 1; i <= len; i++)
	{
		sum = (*(num1 + len - i) - '0') + (*(num2 + len - i) - '0') + carry;
		carry = sum / 10;
		*(num1 + len - i) = (sum % 10) + '0';
	}
}

/**
 * print - print a string, if string starts with 0, it is ignored
 * @s: the string
 * Return: nothing
 */
void print(char *s)
{
	if (*s == '0')
		s++;
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * zero_check - checks if the passed number contains only zeros
 * @num: the number
 * Return: 0 if num has only zeros, 1 otherwise
 */
int zero_check(char *num)
{
	if (*num == 0)
		return (0);
	if (*num == '0')
		return (zero_check(num + 1));
	return (1);
}
