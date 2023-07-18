#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: function to write the string "_putchar\n"
 *		 to the standard output followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}

