#include "function_pointers.h"
/**
  * int_index - searches for an integer element
  * @array: array
  * @size: array's size
  * @cmp: function ponter used to veryify if it's int or not
  *
  * Return: index of the 1st element that matches otherwise -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
	{
		return (-1);

	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
