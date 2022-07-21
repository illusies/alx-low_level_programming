#include "main.h"

/**
 * get_bit - function that returns the value of a bit a a given index
 * @n: int
 * @index: int
 * Return: (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
