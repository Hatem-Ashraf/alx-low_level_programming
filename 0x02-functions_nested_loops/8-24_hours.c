#include "main.h"
/**
  * jack_bauer - day minutes
  *
  * Return: nothing
  */
void jack_bauer(void)
{
	int n, k, j, i;
	i = j = k = n = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(n + '0');
		_putchar(k + '0');
		_putchar(':');
		_putchar(j + '0');
		_putchar(i + '0');
		if (n == 2 && k == 3 && j == 5 && i == 9)
		{
			break;
		}
		if (k == 9 && j == 5 && i == 9)
		{
			i = 0;
			j = 0;
			k = 0;
			n++;
		}
		if (j == 5 && i == 9)
		{
			i = 0;
			j = 0;
			k++;
		}
		if (i == 9)
		{
			i = 0;
			j++;
		}
	}
}
