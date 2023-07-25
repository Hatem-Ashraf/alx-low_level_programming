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
	int flag = 0;
	int val;

	while (*start != '\0')
	{
		if (*start >= '0' && *start <= '9')
		{
			if (*(start - 1) == '-')
			{
				flag = 1;
			}
			break;
		}
		start++;
	}
	if (*start == '\0')
	{
		return (0);
	}
	val = atoi(start);
	if (flag)
	{
		val *= -1;
	}
	return (val);
}
