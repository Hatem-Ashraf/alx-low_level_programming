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
	char *s, *temp;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
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
