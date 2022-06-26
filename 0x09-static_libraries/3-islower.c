#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}