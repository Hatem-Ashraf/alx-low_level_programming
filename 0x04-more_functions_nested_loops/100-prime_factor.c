#include <stdio.h>

/**
 * main - start point
 *
 * Return: always 0
 */
int main(void)
{
	long int i, x = 612852475143, largestPrime = 2;

	for (i = 2; i * i <= x; i++)
	{
		while (x % i == 0)
		{
			largestPrime = i;
			x /= i;
		}
	}
	if (x > largestPrime)
	{
		largestPrime = x;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
