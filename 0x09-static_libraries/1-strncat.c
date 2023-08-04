#include "main.h"
/**
  * _strncat - concatinates n bytes from the src to the dest
  * @dest: destination str
  * @src: source string
  * @n: No. of bytes of the src
  *
  * Return: pointer to the destination
  */

char *_strncat(char *dest, char *src, int n)
{
	char *temp1 = dest;
	char *temp2 = src;
	int i = 1;

	while (*temp1 != '\0')
	{
		temp1++;
	}
	while (i <= n && *temp2 != '\0')
	{
		*temp1 = *temp2;
		temp1++;
		temp2++;
		i++;
	}
	*temp1 = '\0';
	return (dest);
}
