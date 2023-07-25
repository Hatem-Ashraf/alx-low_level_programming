#include "main.h"

/**
  * puts_half - prints the 2nd half of the string
  * @str: string
  *
  * Return: nothing
  */
void puts_half(char *str)
{
	char *s = str;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
	} else
	{
		len /= 2;
	}
	s = str + len;
	while (*s != '\0' && *s != '\n')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
