#include "main.h"
#include <stdio.h>
/**
  * get_bit - returns the value of a given bit
  * @n: Decimal value
  * @index: the index
  *
  * Return: the value of a bit if success, otherwise -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int counter;
	unsigned long int temp = n;


	for (counter = 0; temp; counter++)
		temp >>= 1;
	if (index > counter - 1)
		return (-1);
	if (n & (1 << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
