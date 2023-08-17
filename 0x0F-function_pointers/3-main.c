#include "3-calc.h"
/**
  * main - start point
  * @argc: number of arguments
  * @argv: value of each argument
  *
  * Return: 0 if all right, exit with 98 , 99 or 100 if any condition fails
  */
int main(int argc, char **argv)
{
	int (*op)(int, int);
	char *s = argv[2];
	char *t = argv[3];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' && *t == '0') || (*s == '%' && *t == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
