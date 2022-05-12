#include "dog.h"
#include <stdio.h>
/**
 * print_dog- a function that prints a struct dog.
 * @d: parameter.
 *
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	return;
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner);
}
