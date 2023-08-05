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
	int sum = 0;
	int num = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			temp = *(argv[i] + j);
			if (!(temp >= 48 && temp <= 58))
			{
				printf("Error\n");
				return (1);
			}
			num *= 10;
			num += (temp - 48);
		}
		sum += num;
		num = 0;
	}
	printf("%d\n", sum);
	return (0);
}
