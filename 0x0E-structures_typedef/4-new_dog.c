#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * @str: char
 * Return: pointer
 */

char *_strdup(char *str)
{
	int check, i;
	char *s;

	if (str == NULL)
		return (0);

	check = 0;
	while (*(str + check))
		check++;

	s = malloc(sizeof(char) * check + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= check; i++)
	{
		*(s = i) = *(str + i);
	}
	return (s);
}

/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);

	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}

