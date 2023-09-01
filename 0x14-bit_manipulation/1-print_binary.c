#include "main.h"
/**
  * print_binary - Prints the bin representation fo the number
  * @n: Decimal number
  *
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL;
	int counter;
	unsigned long int temp = n;

	temp >>= 1;
	for (counter = 0; temp; counter++)
	{
		temp >>= 1;
		mask <<= 1;
	}
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
