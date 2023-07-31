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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[i] = b;
	}

	return (s);
}
