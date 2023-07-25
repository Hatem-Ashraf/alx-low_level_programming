#include "main.h"
#include <stdio.h>

/**
  * print_array - prints arr
  * @a: num1
  * @n: num2
  *
  * Return: nohting
  */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[n - 1]);
	printf("\n");
}
