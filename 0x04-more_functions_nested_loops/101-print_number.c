#include "main.h"

/**
 * print_number - print a number
 * @n: the number
 *
 * Return: nothing
 */

void print_number(int n)
{
	int arr[10], i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	i = 0;
	while (n > 0)
	{
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		i--;
	}
}
