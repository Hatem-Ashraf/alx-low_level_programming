#include "main.h"
#include <stdlib.h>
/**
  * array_ranges - int array
  * @min: min
  * @max: max
  *
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
