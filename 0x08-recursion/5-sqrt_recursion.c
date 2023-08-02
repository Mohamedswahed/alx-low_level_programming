#include "main.h"

/**
 * _sqrt_assist - assist function to help _sqrt_recursion function
 * @n: number
 * @i: increment value
 *
 * Return: natural square root of n
 */
int _sqrt_assist(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_assist(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_assist(n, 0));
}
