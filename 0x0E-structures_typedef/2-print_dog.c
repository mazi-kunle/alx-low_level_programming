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
	}
	if ((d->name == NULL && !d->age && d->owner == NULL))
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	} else if ((d->name == NULL && !d->age))
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	} else if ((d->name == NULL && d->owner == NULL))
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	} else if ((!d->age && d->owner == NULL))
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	} else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
