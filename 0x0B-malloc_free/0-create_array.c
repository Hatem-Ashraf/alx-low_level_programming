#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of size 'size' with chars 'c'
  * @size: the array's size
  * @c: the char
  *
  * Return: pointer to the array created
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));
	
	if (size == 0 || !arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
