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
	char name2[20], owner2[20];
	char *a, *b;

	ptr = malloc(sizeof(ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	a = strcpy(name2, name);
	b = strcpy(owner2, owner);
	printf("%s %s\n", name2, owner2);
	ptr->name = a;
	ptr->age = age;
	ptr->owner = b;
	return (ptr);
}
