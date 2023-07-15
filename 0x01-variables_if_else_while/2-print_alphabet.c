#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	chr = 'a';

	while (chr <= 'z')
		putchar(chr);
		chr++;
	putchar('\n');

	return (0);
}
