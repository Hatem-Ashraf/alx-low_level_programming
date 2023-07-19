#include "main.h"
/**
  * print_last_digit - as it is
  * @n: num
  *
  * Return: the n
  */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	{
		rem = -1 * (n % 10);
	} else
	{
		rem = n % 10;
	}
	_putchar(rem + '0');
	return (rem);
}
