#include "main.h"
/**
  * pr - prime function
  * @num: number
  * @try: number to iterate
  * @end: end of iteration
  *
  * Return: 1 if prime, otherwise 0
  */
int pr(int num, int try, int end)
{
	if (try > end)
	{
		return (1);
	}
	if (num % try == 0)
	{
		return (0);
	}
	return (pr(num, try + 1, end));
}
/**
  * is_prime_number - checks if the num is prime or not
  * @n: number
  *
  * Return: 1 if prime, otherwise 0
  */
int is_prime_number(int n)
{
	if (n == 1 || n < 0 || n == 0)
	{
		return (0);
	}
	return (pr(n, 2, n / 2));
}
