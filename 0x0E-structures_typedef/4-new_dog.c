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
	char *name2, *owner2;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	name2 = name;
	owner2 = owner;
	ptr->name = name2;
	ptr->age = age;
	ptr->owner = owner2;
	return (ptr);
}
