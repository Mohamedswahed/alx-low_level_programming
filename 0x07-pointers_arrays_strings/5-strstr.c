#include "main.h"

/**
 * _strstr - finds the first occurrence of substring
 * @haystack: string to be scanned
 * @needle: string containing the sequence
 * Return: pointer to the beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
