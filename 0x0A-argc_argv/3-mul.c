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
	(void) argc;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (*argv[1] - 48) * (*argv[2] - 48));
	return (0);
}
