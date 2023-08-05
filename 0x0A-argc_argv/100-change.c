#include <stdio.h>
#include <stdlib.h>
/**
  * main - start point
  * @argc: No of args
  * @argv: arg's value array
  *
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num, i;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if ((num - coins[i]) >= 0)
		{
			num -= coins[i];
			count++;
			while ((num - coins[i]) >= 0)
			{
				num -= coins[i];
				count++;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
