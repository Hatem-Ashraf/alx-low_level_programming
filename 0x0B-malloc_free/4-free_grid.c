#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2D array
  * @grid: 2D array
  * @height: array height
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int **temp = malloc(height * sizeof(int *));
	int i;

	if (!grid)
	{
		return;
	}
	if (!temp)
	{
		for (i = 0; i < height; i++)
		{
			free(temp[i]);
		}
		return;
	}
	for (i = 0; i < height; i++)
	{
		temp[i] = grid[i];
	}
	for (i = 0; i < height; i++)
	{
		free(temp[i]);
	}
	free(temp);
}
