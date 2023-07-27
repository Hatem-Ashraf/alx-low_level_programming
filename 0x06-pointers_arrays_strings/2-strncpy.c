#include <string.h>
#include "main.h"

/**
  * _strncpy - cpoies str to another with n byes
  * @dest: destination str
  * @src: source str
  * @n: No of byes
  *
  * Return: the dest str
  */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
