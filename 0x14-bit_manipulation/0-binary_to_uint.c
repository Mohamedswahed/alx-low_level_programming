#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	for (num = 0; b && *b; b++)
	{
		/* check for invalid chars */
		if (*b != '0' && *b != '1')
			return (0);

		/* shift num left and add current bit */
		num <<= 1;
		num += *b - '0';
	}
	return (num);
}
