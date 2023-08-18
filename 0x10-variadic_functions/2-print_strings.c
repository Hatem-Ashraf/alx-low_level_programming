#include "variadic_functions.h"
/**
  * print_strings - prints strings separated by the separator
  * @separator: the patern of separation
  * @n: No of params
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s = NULL;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s%s", s ? s : "(nil)",
				i != n - 1 ? (separator ? separator : "") : "");
	}
	printf("\n");
	va_end(ap);
}
