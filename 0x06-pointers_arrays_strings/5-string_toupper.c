#include "main.h"

/**
  * string_toupper - convert lower to upper case
  * @str: string
  *
  * Return: pointer to the converted string
  */

char *string_toupper(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			(*s) -= 32;
		}
		s++;
	}
	return (str);
}
