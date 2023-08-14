#include "dog.h"
#include <stdio.h>
/**
  * init_dog - initiate a dog struct
  * @d: dog struct
  * @name: dog's name
  * @age: age
  * @owner: owner
  *
  * Description: assign values to the a dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
