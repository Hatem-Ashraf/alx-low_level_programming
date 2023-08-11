#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocate memory block of size b
  * @b: block size
  *
  * Return: void pointer to that block
  */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}
	return (s);
}
