#include "main.h"
/**
  * flip_bits - returns how many bit is diff between 2 numbers
  * @n: num1
  * @m: num2
  *
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, diff = 0;

	for (i = 0; n || m; i++)
	{
		if ((n & 1) != (m & 1))
			diff++;
		n >>= 1;
		m >>= 1;
	}
	return (diff);
}
