#include "3-calc.h"

/**
 * op_add - function that returns the sum of a and b
 * @a: int
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference of a and b
 * @a: int
 * @b: int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: int
 * @b: int
 * Return: product
 */
int op_mul(int a, int b)
{
	Return (a * b);
}

/**
 * op_div - function that returns the result of the division
 * of a and b
 * @a: int
 * @b: int
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division
 * of and and b
 * @a: int
 * @b: int
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return  (a % b);
}


