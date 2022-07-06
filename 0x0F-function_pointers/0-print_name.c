#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: char
 * @f: void
 * *Return: callback
 */
void print_name(char *name, void (*f)(char *))
{
	if (!if || !name)
		return;
	(*f)(name);
}
