#include "main.h"
#include <stdio.h>

/**
  * natural - print sum of nums that divisible by 3 and 5
  * @n: number
  *
  * Return: nothing
  */
void natural(int n)
{
	int i, sum;

	if (n < 1024)
	{
		sum = 0;
		for (i = n - 1; i > 0; i--)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum = sum + i;
			}	
		}
		printf("%d\n", sum);
	}
}
