#include "main.h"
#include <string.h>
/**
  * _strspn - returns the no of bytes found
  * @s: string
  * @accept: string set
  *
  * Return: No of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
