#include "variadic_functions.h"

/**
  * str_format - prints a string
  * @separator: sep
  * @ap: va_list item
  *
  * Return: void
  */
void char_format(char *separator, va_list ap)
{
	printf("%c%s", va_arg(ap, int), separator);
}
/**
  * str_format - prints a string
  * @separator: sep
  * @ap: va_list item
  *
  * Return: void
  */
void str_format(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);
	if (!str)
	{
		str = "(nil)";
	}
	printf("%s%s", separator, str);
}

/**
  * int_format - prints an integer
  * @separator: sep
  * @ap: va_list item
  *
  * Return: void
  */
void int_format(char *separator, va_list ap)
{	
	printf("%s%d", separator, va_arg(ap, int));
}

/**
  * float_format - prints a float
  * @separator: sep
  * @ap: va_list item
  *
  * Return: void
  */
void float_format(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
  * print_all - prints all params
  * @format: string that specifies the type of each param
  * @...: params
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep = "";
	st_print map[] = {
		{"c", char_format},
		{"i", int_format},
		{"f", float_format},
		{"s", str_format},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == map[j].s[0])
			{
				map[j].f(sep, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
