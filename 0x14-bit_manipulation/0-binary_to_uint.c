#include "main.h"
/**
  * binary_to_uint - Converts bin to unsigned int
  * @b: binary
  *
  * Return: The converted number if success, otherwise 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int temp, i;
	int mul = 1;

	if (!b)
		return (0);
	for (temp = 0; b[temp]; temp++)
		;
	for (i = temp - 1; i > -1; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				n += mul;
			}
			mul *= 2;
		} else
		{
			return (0);
		}
	}
	return (n);
}
