#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char
 * Return: (0 or 1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

