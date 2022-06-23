#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (squared(n, 1));
}

/**
 * squared - the square root
 * @n: int
 * @val: int
 * Return: int
 */

int squared(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squared(n, val + 1));
	else
		return (-1);
}
