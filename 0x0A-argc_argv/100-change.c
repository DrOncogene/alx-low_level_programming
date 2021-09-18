#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins needed for a given change
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, 1 if more or less than 1 argument is passed
 */
int main(int argc, char *argv[])
{
	int num_coins, amount, i;
	int coins[] = {25, 10, 5, 2, 1};

	num_coins = 0;
	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount <= 0)
			printf("%d\n", 0);
		else
		{
			for (i = 0; i < 5; i++)
			{
				num_coins += amount / coins[i];
				amount = amount % coins[i];
			}
			printf("%d\n", num_coins);
		}
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (0);
}
