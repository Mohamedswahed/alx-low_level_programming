#include "main.h"

/**
 * _strspn -function to get the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes from _strspn function
 * Return: the number of bytes in s consists of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
