#include "main.h"

/**
  * cap_string - cap each word in a string
  * @str: string
  *
  * Retunr: pointer to that string
  */
char *cap_string(char *str)
{
	char *s = str;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', '\0'};
	int i;

	if (*s >= 97 && *s <= 122)
	{
		*s -= 32;
	}
	s++;
	while (*s != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s - 1) == sep[i] && *s >= 97 && *s <= 122)
			{
				*s -= 32;
			}
		}
		s++;
	}
	return (str);
}
