#include "main.h"
/**
  * clear_bit - Sets a bit
  * @n: a Number
  * @index: index
  *
  * Return: 1 if success, otherwise -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
