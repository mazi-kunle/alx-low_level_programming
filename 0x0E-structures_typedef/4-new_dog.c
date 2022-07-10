#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog-a function that creates a new dog.
 * @name: parameter.
 * @age: parameter.
 * @owner: parameter.
 * Return: a structure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;


	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->owner = strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
