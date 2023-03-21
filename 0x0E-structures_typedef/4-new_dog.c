/*
 * File - 4-new_dog.c
 */

#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char _strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: string in question
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str++)
		length++;

	return (length);
}

/**
 * _strcopy - copies a string returned by src.
 * @dest: buffer storing the string copy
 * @src: string in question
 *
 * Return: pointer to dest
 */
char _strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

dog_t *new_dog(char *name, float *age, char *owner);
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner =  malloc(sizeof(char) * (_strlen(owner) + 1))
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
