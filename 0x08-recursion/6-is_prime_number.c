#include "main.h"

int prime(int n, int mid);
/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n / 2));
}

int prime(int n, int mid)
{
	if (mid < 2)
		return (1);
	if (n % mid == 0)
		return (0);
	else
		return (1 * prime(n, mid - 1));
}
