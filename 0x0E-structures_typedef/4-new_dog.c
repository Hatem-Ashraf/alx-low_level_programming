#include "dog.h"
#include <stdlib.h>
/**
  * ln - length
  * @ch: string
  *
  * Return: length
  */
int ln(char *ch)
{
	int len = 0;

	while (*ch++)
		len++;
	return (len);
}

/**
  * cpy - copies src to dest
  * @dest: string
  * @src: string
  *
  * Return: nothing
  */
void cpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
}
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
	n = malloc(ln(name));
	if (!n)
	{
		free(dog);
		return (NULL);
	}
	o = malloc(ln(owner));
	cpy(n, name);
	cpy(o, owner);
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
