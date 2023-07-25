#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _atoi - str to int
  * @s: string
  *
  * Return: int
  */
int _atoi(char *s)
{
	char *start = s;
	int flag = 1;
	unsigned int val;

	while (*start != '\0')
	{
		if (*start == '-')
		{
			flag *= -1;
		}
		if (*start >= '0' && *start <= '9')
		{
			break;
		}
		start++;
	}
	if (*start == '\0')
	{
		return (0);
	}
	val = atoi(start);
	if (flag == -1 && val == 2147483648)
	{
		val = ~val + 1;
	} else if (flag == -1 )
	{
		val *= -1;
	}
	return (val);
}
