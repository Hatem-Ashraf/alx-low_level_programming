#include "main.h"
/**
  * rev_string - reversing the string , not printing it
  * @s: string
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	char *end = s;
	char *start = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
