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
	char *s;

        if (!nmemb || !size)
        {
                return (NULL);
        }
        s = calloc(nmemb ,size);
        if (!s)
        {
                return (NULL);
        }
        return (s);

}
