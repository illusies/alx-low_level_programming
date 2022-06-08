#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - function that prints the last digit of a number
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last = n % 10;
	
	if (n < 0)
		last = last * -1;
	
	_putchar(last + '0');
	
	return (last);
}
