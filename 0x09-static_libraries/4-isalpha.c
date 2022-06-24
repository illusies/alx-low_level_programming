#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character
 *
 * Return: int
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}