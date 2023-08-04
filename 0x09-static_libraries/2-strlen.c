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
