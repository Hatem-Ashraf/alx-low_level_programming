#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - alocates 2D array
  * @width: width
  * @height: height
  *
  * Return: pointer to the 2D array
  */
int **alloc_grid(int width, int height)
{
	int **s = malloc(sizeof(int *) * height);
	int i, j;

	if (!s)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (!s[i])
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
