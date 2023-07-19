#include "main.h"
#include <stdio.h>

/**
  * main - start point
  *
  * Return: always 1 
  */
void main(void)
{
	int i, sum;

	sum = 0;
	for (i = 3; i < 1024; i--)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
