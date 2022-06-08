#include "main.h"

/**
 * main - program that prints _putchar
 *
 * Return: (0)
 *
 */
int main(void)
{
	int i = 0;
	char c[10] = "_putchar";
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
