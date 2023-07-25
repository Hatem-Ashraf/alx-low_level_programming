#include "main.h"

/**
  * print_rev - prints str in reverse order
  * @s: string
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	char *ch = s;

	while (*ch != '\0')
	{
		ch++;
	}
	ch--;
	while (ch >= s)
	{
		_putchar(ch[0]);
		ch--;
	}
	_putchar('\n');
}

