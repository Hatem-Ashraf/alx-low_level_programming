#include "main.h"
/**
  * reverse_array - reverses array of int
  * @a: array
  * @n: size of array
  *
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a;
	int temp;

	while (n >= 1)
	{
		end++;
		n--;
	}
	end--;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
