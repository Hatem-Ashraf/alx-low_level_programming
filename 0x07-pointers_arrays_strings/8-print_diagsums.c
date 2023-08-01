#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - calculates the sum of the both diagonals
  * @a: array
  * @size: size of a
  *
  * Return nothing
  */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	i = 0;
	while (i < size)
	{
		sum += *(a + i * size + i);
		i++;

	}
	printf("%d, ", sum);
	sum = 0;
	i = size - 1;
	while (i >= 0)
	{
		sum += *(a + i * size + size - i - 1);
		i--;
	}
	printf("%d\n", sum);
}
