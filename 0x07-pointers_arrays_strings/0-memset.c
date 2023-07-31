#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: Returns a pointer to the memory area s
 * @b: char to copy
 * @n: number of bytes to to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
