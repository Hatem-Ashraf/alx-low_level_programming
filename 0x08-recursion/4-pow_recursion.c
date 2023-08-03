#include "main.h"

/**
  * _pow_recursion - it raises a number to the power of another number
  * @x: base
  * @y: power
  *
  * Return: the result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
