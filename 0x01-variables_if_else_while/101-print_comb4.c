#include <stdio.h>

/**
 * main - prints all possible combinations of three digits numbers without
 * repetitions
 * none
 * Return: success number 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				if ((num3 > num2) && (num2 > num1))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if ((num1 + num2 + num3) != 168)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
