#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[10] = "Holberton";
	int i = 0;
	
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	
	_putchar('\n');
	return (0);
}