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
	char *temp1 = dest;
	char *temp2 = src;
	int i = 1;

	while (i <= n && *temp2 != '\0')
	{
		*temp1 = *temp2;
		i++;
		temp1++;
		temp2++;
	}
	if (*temp2 == '\0')
	{
		*temp1 = '\0';
	}
	return (dest);
}
