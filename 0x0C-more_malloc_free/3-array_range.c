#include "main.h"
#include <stdlib.h>
/**
  * array_range - int array
  * @min: min
  * @max: max
  *
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;
	int range = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	if (range <= 0)
	{
		/*if overflow occures*/
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
