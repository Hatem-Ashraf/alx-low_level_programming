#include "3-calc.h"
/**
  * ln - gets the length
  * @ch: string
  *
  * Return: the length
  */
int ln(char *ch)
{
	int len = 0;

	while (*ch++)
		len++;
	return (len);
}

/**
  * get_op_func - selects the function
  * @s: the operator '+' or '-', ..
  *
  * Return: fuction pointer to the desired function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	if (ln(s) > 1)
	{
		return (NULL);
	}
	for (i = 0; i < 5; i++)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
