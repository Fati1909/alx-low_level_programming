#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - description
 * @str: string
 * Return: length
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - description
 * @src: source
 * @dest: destination
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);

	new = (dog_t *) malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
        if ((*new).owner == NULL)
        {
		free(new->name);
                free(new);
                return (NULL);
	}

	new->name = _strcopy(new->name, name);
	new->age = age;
	new->owner = _strcopy(new->owner, owner);

	return (new);
}
