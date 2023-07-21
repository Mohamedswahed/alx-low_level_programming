#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Description: - A factor is a number that can be evenly
 *	divided into another number.
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n /= i;
	}

	printf("%ld\n", n);

	return (0);
}
