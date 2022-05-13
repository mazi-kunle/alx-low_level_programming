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
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
