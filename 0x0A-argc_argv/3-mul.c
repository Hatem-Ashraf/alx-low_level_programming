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
	int n1, n2;

	(void) argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] == 45)
	{
		n1 =  -1 * (*(argv[1] + 1) - 48);
	} else
	{
		n1 = *argv[1] - 48;
	}
	if (*argv[2] == 45)
	{
		n2 =  -1 * (*(argv[2] + 1) - 48);
	} else
	{
		n2 = *argv[2] - 48;
	}

	printf("%d\n", n1 * n2);
	return (0);
}
