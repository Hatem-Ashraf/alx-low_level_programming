#include "function_pointers.h"
/**
  * array_iterator - uses funrtion pointer to print each element
  * @array: pointer to array
  * @size: array's size
  * @action: function pointer
  *
  * Return: nothing
  */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i++]);
	}
}
