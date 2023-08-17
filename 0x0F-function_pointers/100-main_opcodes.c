#include <stdio.h>
#include <stdlib.h>

/**
  * main - start point
  * @argc: No of args
  * @argv: array of values
  *
  * Return: 1 if success otherwise exit with 1 or 2
  */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (bytes)
	{
		bytes--;
		printf("%02hhx%c", *p++, bytes ? ' ' : '\n');
	}
	return (0);
}
