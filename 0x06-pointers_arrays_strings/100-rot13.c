#include "main.h"

/**
  * rot13 - encoding a str using rot13 tech
  * @str: string
  *
  * Return:pointer to  the string
  */
char *rot13(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 109)
		{
			(*s) += 13;
		} else if (*s >= 110 && *s <= 122)
		{
			(*s) -= 13;
		} else if (*s >= 65 && *s <= 77)
		{
			(*s) += 13;
		} else if (*s >= 78 && *s <= 90)
		{
			(*s) -= 13;
		}
		s++;
	}
	return (str);
}
