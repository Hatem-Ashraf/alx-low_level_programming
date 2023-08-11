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
	void *s = malloc(b);

	if (!s)
	{
		exit(98);
	}
	return (s);
}
