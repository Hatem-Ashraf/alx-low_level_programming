#include "main.h"

/**
  * natural - print sum of nums that divisible by 3 and 5
  * @n: number
  *
  * Return: nothing
  */
void natural(int n)
{
	int i, sum, arr[5];

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
		i = 0;
		while (sum > 0)
		{
			arr[i] = sum % 10;
			i++;
			sum /= 10;
		}
		i--;
		while (i > -1)
		{
			_putchar(arr[i] + '0');
			i--;
		}
		_putchar('\n');
	}
}
