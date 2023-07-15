#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - start point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int reminder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	reminder = n % 10;
	if (reminder == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, reminder);
	} else if (reminder < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, reminder);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, reminder);
	}
	return (0);
}
