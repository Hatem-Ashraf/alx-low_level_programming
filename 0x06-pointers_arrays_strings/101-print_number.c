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
	unsigned int num = n;
	unsigned int temp;

	if (n == -2147483648)
	{
		_putchar('-');
		num = ~n + 1;
	} else if (n < 0)
	{
		_putchar('-');
		num = -1 * n;
	}
	temp = num;
	while (num / 10)
	{
		div *= 10;
		num /= 10;
	}
	num = temp;
	while (div / 10)
	{
		_putchar(num / div + '0');
		num = num % div;
		div /= 10;
	}
	_putchar(num + '0');
}
