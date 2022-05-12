#include "main.h"
#include <stdio.h>
/**
 * init_dog- a function that initialize a variable of type struct dog.
 * @name: parameter.
 * @age: parameter.
 * @owner: parameter.
 * @d: pointer to dog structure.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
