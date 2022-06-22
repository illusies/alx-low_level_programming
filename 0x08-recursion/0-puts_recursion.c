#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * followed by a new line.
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *s1 = s;
	
	if (*s1 != '\0')
	{
		_putchar(*s);
		s1++;
		_puts_recursion(s1);
													}
	else
	_putchar('\n');

}
