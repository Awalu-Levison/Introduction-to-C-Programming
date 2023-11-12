#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 ** print_dog - Printing the dogs information
 ** @d: The structure of particular dog
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "Name: (nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
