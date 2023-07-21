#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch == 50 || ch == 52)
		{
			continue;
		}
		else
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
