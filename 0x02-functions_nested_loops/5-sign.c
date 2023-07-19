#include "main.h"
/**
  * print_sign - checks if n is a +, - or 0
  * @n: number to be checked
  *
  * Return: 1 if +ve , -1  if -ve , 0 is zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	putchar('0');
	return (0);
}
