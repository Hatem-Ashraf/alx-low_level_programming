#include <stdio.h>
#include <math.h>
/**
 * isPrime - check if prime
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(long int n)
{
	long int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i < (long int) pow(n, 0.5) + 1; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - start point
 *
 * Return: always 0
 */
int main(void)
{
	long int i;
	long int x = 612852475143;
	long int largestPrime = 2;

	for (i = 2; i < x; i++)
	{
		if (isPrime(i) && x % i == 0)
		{
			x = x / i;
			largestPrime = i;
		}
	}
	printf("%ld\n", largestPrime);
	return (0);
}
