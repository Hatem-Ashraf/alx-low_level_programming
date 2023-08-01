#include "main.h"
#include <string.h>
/**
  * _strpbrk - searches for the first char in the s
  * @s: string
  * @accept: string
  *
  * Return: pointer to that char
  */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
