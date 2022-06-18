#include "dog.h"
#include <stdio.h>
/**
 * print_dog- a function that prints a struct dog.
 * @temp: parameter.
*/
void print_dog(struct dog *temp)
{
	struct dog *d;

	if (d != NULL)
	{
		d = temp;
	if ((d->name == NULL && d->owner == NULL))
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	} else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	} else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	}
}
