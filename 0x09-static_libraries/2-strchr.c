#include "main.h"
#include <string.h>

/**
  * _strchr - searches for the 1st occurance of the char
  * @s: string
  * @c: char
  *
  * Return: pointer to that char or NULL
  */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
