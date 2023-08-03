#include "main.h"
/**
  * sq - calculate the sqrt
  * @num: number
  * @try: the number used to test
  *
  * Return: the sqrt
  */
int sq(int num, int try)
{
	int res = num / try;

	if (try > num / 2)
	{
		return (-1);
	}
	if (res * res == num)
	{
		return (res);
	}
	return (sq(num, try + 1));
}

/**
  * _sqrt_recursion - calculates the square root of a number
  * @n: number
  *
  * Return: the result
  */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (sq(n, 1));
}
