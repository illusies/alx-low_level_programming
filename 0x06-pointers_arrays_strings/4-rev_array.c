#include "main.h"

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @a: pointer
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (temp = n / 2; temp > 0; temp--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
