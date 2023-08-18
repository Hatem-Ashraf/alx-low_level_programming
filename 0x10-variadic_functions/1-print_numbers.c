#include "variadic_functions.h"
/**
  * print_numbers - prints all the params seperated
  * @separator: the seperator between each param
  * @n: number of params
  *
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!separator)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), i != n - 1 ? separator : "\n");
	}
}
