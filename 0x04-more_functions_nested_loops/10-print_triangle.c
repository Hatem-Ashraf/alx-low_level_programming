#include "main.h"

/**
  * print_triangle - prints triangle
  * @n: height of the triangle
  *
  * Return: nothing
  */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
	_putchar('\n');
	}
}
