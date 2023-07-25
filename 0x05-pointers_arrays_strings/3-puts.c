#include <unistd.h>
#include "main.h"

#include "main.h"

/**
  * _strlen - returns the length of the string
  * @s: string
  *
  * Return: length of the str
  */
int _strlen(char *s)
{
	char *len = s;
	int i = 0;

	while (*len != '\0')
	{
		i++;
		len++;
	}
	return (i);
}


/**
  * _puts - writes a char to the stdout
  * @str: the char to be printed
  *
  * Return: nothing
  */
void _puts(char *str)
{

	int len = _strlen(str);
	write(1, str, len);
	write(1, "\n", 1);
}
