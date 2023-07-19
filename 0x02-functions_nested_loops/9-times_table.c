#include "main.h"
/**
  * times_table - table
  *
  * Return: times table
  */
void times_table(void)
{
	int i, j, res;
	
	res = j = i = 0;
	while (1)
	{
		res = i * j;
		if (res > 9)
		{
			if (i != 0 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(res / 10 + '0');
			_putchar(res % 10 + '0');
		} else
		{
			if (i != 0 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(res + '0');
		}
		if (i == 9 && j == 9)
		{
			break;
		}
		if (i == 9)
		{
			i = -1;
			j++;
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
