#include "main.h"
#include <stdlib.h>
/**
  * _realloc - reallocate the ptr with the new_size
  * @ptr: pointer
  * @old_size: old size
  * @new_size: new size
  *
  * Return: pointer to the newly aloocated block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *str = ptr;
	int *temp = NULL;
	int *temp2 = NULL;
	unsigned int i;
	unsigned int min = old_size;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size < old_size)
	{
		min = new_size;
	}
	temp = malloc(sizeof(int) * new_size);
	temp2 = temp;
	if (!temp)
	{
		return (NULL);
	}
	for (i = 0; i < min; i++)
	{
		*temp = *str;
		str++;
		temp++;
	}
	free(ptr);
	return (temp2);
}
