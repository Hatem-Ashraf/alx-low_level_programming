#include "main.h"
/**
  * leet - change some letter with some numbers
  * @str: string
  *
  * Return: the new string pointer
  */
char *leet(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = '4';
		} else if (*s == 'e' || *s == 'E')
		{
			*s = '3';
		} else if (*s == 'o' || *s == 'O')
		{
			*s = '0';
		} else if (*s == 't' || *s == 'T')
		{
			*s = '7';
		} else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}
		s++;
	}
	return (str);
}
