#include <stdio.h>
#include "dog.h"
/**
 *init_dog - this fuction initializes the parameters of dog
 *@name: this is gong to be the passed name for the dog
 *@age: this is  the value  for the dog struct age propertie
 *@owner: this char is the name of the owner
 *@d: this is the dog to be named
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
