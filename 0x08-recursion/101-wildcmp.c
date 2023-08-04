#include "main.h"

/**
  * end - steps forwads to the last char of the string
  * @s: string
  *
  * Return: pointer to the last char
  */
char *end(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	return (end(s + 1));
}

/**
  * wil - searching backword for the char after the * in the s2
  * @strr1: pointer to s1 to change s1's value
  * @str1: string 1
  * @str2: string 2
  *
  * Return: 1 if that char found, 0 otherwise
  */

int wil(char **strr1, char *str1, char *str2)
{
	if (*str2 == '*')
	{
		return (1);
	}
	if (*str1 == '\0')
	{
		return (0);
	}
	if (*str1 == *str2 && *(str1 - 1) != *str2)
	{
		*strr1 = str1;
		return (1);
	}
	str1--;
	return (wil(strr1, str1, str2));
}

/**
  * wildcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: 1 if identical, otherwise 0
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(end(s2)) == '*')
	{
		return (1);
	}
	else if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	} else if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		return (1);
	} else if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) != '*')
	{
		return (0);
	} else if (*s2 == '*' && *s1 == '\0')
	{
		return (1);
	} else if (*s2 == '*' && *(s2 + 1) == '*')
	{
		s2++;
		return (wildcmp(s1, s2));
	} else if (*s2 == '*')
	{
		s2++;
		s1 = end(s1);
		if (!wil(&s1, s1, s2))
		{
			return (0);
		}
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	else if (*s2 == *s1)
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	return (0);
}
