#include "dog.h"
#include <stdlib.h>
/**
 ** _strlen - Generates the length of a string
 ** @s: Parameter to be used
 ** Return: (0 on successful execution)
 **/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
	return (0);
}

/**
 ** _strcpy - copy the string pointed to by src to dest
 ** @dest: First char to check
 ** @src: First char to check
 ** Return: 0 is success
 **/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 ** *new_dog - A function to create new dog
 ** @name: The name of dog
 ** @age: Age of dog
 ** @owner: Owner of the dog
 ** Return: Dog's information
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int a, b; /*a and b : lengths of name and owner*/

	a = _strlen(name);

	b = _strlen(owner);

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
