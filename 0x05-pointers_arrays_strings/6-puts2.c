#include "main.h"
/**
  * puts2 - prints in +2
  * @str: string
  *
  * Return: nothing
  */

void puts2(char *str)
{
	char *s = str;
	char *end = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (*s != '\0' && s <= end)
	{
		_putchar(*s);
		s += 2;
	}
	_putchar('\n');
}

