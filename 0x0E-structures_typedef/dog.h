#ifndef DOG_H
#define DOG_H
/**
  * struct dog - struct about a dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Description: a dog struct that's contains infos about a dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
