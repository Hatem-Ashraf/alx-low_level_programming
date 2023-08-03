#include "main.h"

/**
  * pal - palendrom function
  * @start: start string
  * @end: string end
  *
  * Return: 1 if true, 0 otherwise
  */
int pal(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (pal(start + 1, end - 1));

}

/**
  * is_palindrome - checks if the string is palindrome
  * @s: string
  *
  * Return: 1 if palindrome, otherise 0
  */
int is_palindrome(char *s)
{
	char *en = s;

	if (*s == '\0')
	{
		return (1);
	}
	while (*en != '\0')
	{
		en++;
	}
	en--;
	return (pal(s, en));
}
