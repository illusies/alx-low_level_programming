#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int check = 0;
	char alphabet = 'a';

	while (check < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		check++;
	}
}
