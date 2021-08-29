#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digits numbers without
 * repetitions separated by space
 * none
 * Return: success number 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
					if (((num1 + num2) <= (num3 + num4))
					&& (num1 <= num3) && (num4 >= num1))
					{
						putchar(num1);
						putchar(num2);
						putchar(32);
						putchar(num3);
						putchar(num4);
					if ((num1 + num2 + num3 + num4) != 227)
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
