#include "main.h"

/**
 * *_strcat - function concatenates two srtings
 * @dest: pointer to a char
 * @src:  pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
