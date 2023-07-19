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
		n  = n * -1;
	}
	rem = n % 10;
	_putchar(rem + '0');
	return (rem);
}
