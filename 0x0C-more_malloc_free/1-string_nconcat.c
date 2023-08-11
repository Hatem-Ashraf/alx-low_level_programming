#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
  * ln - length
  * @ch: string
  *
  * Return: length
  */
unsigned int ln(char *ch)
{
	int len = 0;
	char *s = ch;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
  * string_nconcat - concatinates 2 string
  * @s1: string1
  * @s2: string2
  * @n: number of bytes to be copied from s2
  *
  * Return: pointer to the new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *s, *temp;
	char *str1 = s1;
	char *str2 = s2;

	if (!s1)
	{
		str1 = malloc(1);
		*str1 = '\0';
	}
	if (!s2)
	{
		str2 = malloc(1);
		*str2 = '\0';
	}
	len1 = ln(str1);
	len2 = ln(str2);
	if (n > len2 || n > UINT_MAX - len1 - 1)
		n = len2;
	s = malloc((len1 + n + 1) * sizeof(char));
	if (!s)
	{
		return (NULL);
	}
	temp = s;
	for (i = 0; i < len1; i++)
	{
		*temp = *str1;
		temp++;
		str1++;
	}
	for (i = 0; i < n; i++)
	{
		*temp = *str2;
		temp++;
		str2++;
	}
	*temp = '\0';
	return (s);
}
