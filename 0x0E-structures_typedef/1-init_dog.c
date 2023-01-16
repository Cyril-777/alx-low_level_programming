#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Init struct
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
