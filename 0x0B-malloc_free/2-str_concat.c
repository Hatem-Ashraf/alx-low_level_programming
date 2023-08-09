#include "main.h"
#include <stdlib.h>
/**
  * length - length
  * @ch: string
  *
  * Return: length
  */
int length(char *ch)
{
	int len;

	while (*ch != '\0')
	{
		len++;
		ch++;
	}
	return (len);

}
/**
  * str_concat - concates two strings
  * @s1: string1
  * @s2: string2
  *
  * Return: pointer to the newly string created
  */
char *str_concat(char *s1, char *s2)
{
	char *str1 = s1;
	char *str2 = s2;
	char *s = NULL;
	char *temp = NULL;
	int len1 = 0;
	int len2 = 0;

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
	while (*str1 != '\0')
	{
		len1++;
		str1++;
	}
	len1 = length(str1);
	len2 = length(str2);
	str1 = s1;
	str2 = s2;
	s = malloc(len1 + len2 + 1);
	temp = s;
	while (*str1 != '\0')
	{
		*temp = *str1;
		str1++;
		temp++;
	}
	while (*str2 != '\0')
	{
		*temp = *str2;
		temp++;
		str2++;
	}
	temp = '\0';
	return (s);
}
