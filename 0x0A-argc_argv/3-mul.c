#include <stdio.h>

/**
  * main - start point
  * @argc: No of args
  * @argv: arg's value array
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, j, temp;
	int mul = 1;
	int nums[2] = {0};
	int negative[2] = {0};

	(void) argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; *(argv[i + 1] + j) != '\0'; j++)
		{
			temp = *(argv[i + 1] + j);
			if (temp == 45)
			{
				negative[i] = 1;
				continue;
			}
			nums[i] *= mul;
			nums[i] += (temp - 48);
			mul = 10;
		}
		mul = 1;
	}
	for (i = 0; i < 2; i++)
	{
		if (negative[i])
		{
			nums[i] *= -1;
		}
	}
	printf("%d\n", nums[0] * nums[1]);
	return (0);
}
