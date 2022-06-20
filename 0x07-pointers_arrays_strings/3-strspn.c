#include "main.h"

/**
 * _strspn - function that gets the length of a 
 * prefix substring
 * @s: String where substring will look
 * @accept: Substring of accepted chars
 * Return: Length of occurence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
