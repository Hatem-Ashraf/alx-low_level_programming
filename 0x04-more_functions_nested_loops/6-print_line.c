#include "main.h"

/**
  * print_line - print _ n times
  * @n: No of _
  *
  * Return: nothing
  */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
