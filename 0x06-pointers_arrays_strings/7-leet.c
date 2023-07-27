#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *dec = "aAeEoOtTlL";
	char *enc = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; dec[j]; j++)
			if (s[i] == dec[j])
				s[i] = enc[j];
	}

	return (s);
}
