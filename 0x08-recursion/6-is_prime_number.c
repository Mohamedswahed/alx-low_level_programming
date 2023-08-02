#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - check input integer is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime
 * @n: number to evaluate
 * @i: iteration number
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
