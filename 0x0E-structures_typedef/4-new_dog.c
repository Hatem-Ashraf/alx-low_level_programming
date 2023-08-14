#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: pointer to the newly created dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	char *n = NULL;
	char *o = NULL;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	n = malloc(strlen(name));
	if (!n)
	{
		free(dog);
		return (NULL);
	}
	o = malloc(strlen(owner));
	strcpy(n, name);
	strcpy(o, owner);
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
