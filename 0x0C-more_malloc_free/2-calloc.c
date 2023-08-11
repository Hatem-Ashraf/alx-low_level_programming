#include "main.h"
#include <stdlib.h>
/**
  * _calloc - allocates an array of values with 0
  * @nmemb: No of elements
  * @size: sizeof each
  *
  * Return: pointer to the array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s = malloc(nmemb * size);
	char *temp = s;
	unsigned int i;

	if (!s)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		*temp = 0;
		temp += size;
	}
	return (s);

}
