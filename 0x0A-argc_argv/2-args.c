#include <stdio.h>

/**
 * main - program prints all arguments it receives
 * @argc: number of arguments in command line
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
