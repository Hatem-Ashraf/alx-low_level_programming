#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints a dog values if exist
  * @d: dog struct
  *
  * Description: a function to print the dog's values
  */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
