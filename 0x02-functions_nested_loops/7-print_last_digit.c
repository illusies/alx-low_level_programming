#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - function that prints the last digit of a number
 *
 * Return: int
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = abs(i) % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}