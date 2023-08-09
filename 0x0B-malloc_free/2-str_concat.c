#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * length - length
  * @ch: string
  *
  * Return: length
  */
int length(char *ch)
{
	char *str = ch;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
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
	char *str1, *str2, *s, *temp;
	int len1 = 0;
	int len2 = 0;

	s = temp = NULL;
	str1 = s1;
	str2 = s2;

	if (!s1)
	{
		str1 = malloc(sizeof(char));
		*str1 = '\0';
	}
	if (!s2)
	{
		str2 = malloc(sizeof(char));
		*str2 = '\0';
	}
	len1 = length(str1);
	len2 = length(str2);
	s = malloc(len1 + len2 + 1);
	if (!s)
	{
		return (NULL);
	}
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
