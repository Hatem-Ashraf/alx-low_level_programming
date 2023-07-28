#include "main.h"

/**
  * print_number - prints an integer value
  * @n: number
  *
  * Return: nothing
  */

void print_number(int n)
{
	int div = 1;
	int num = n;

	if (n == -2147483648)
	{
		_putchar('-');
		n = ~n + 1;
	} else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (num / 10)
	{
		div *= 10;
		num /= 10;
	}
	num = n;
	while (div / 10)
	{
		_putchar(num / div + '0');
		num = num % div;
		div /= 10;
	}
	_putchar(num + '0');
}
