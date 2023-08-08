#include "main.h"
#include <stdlib.h>
/**
  * _strdup - allocates a string with the same value of the 'str'
  * @str: string
  *
  * Return: pointer to the newly created string
  */
char *_strdup(char *str)
{
	char *srch = str;
	char *s;
	char *srch2;
	int len = 0;

	if (!str)
	{
		return (NULL);
	}
	while (*srch != '\0')
	{
		len++;
		srch++;
	}
	srch = str;
	s = malloc((len + 1) * sizeof(char));
	srch2 = s;
	if (!s)
	{
		return (NULL);
	}
	while (*srch != '\0')
	{
		*srch2 = *srch;
		srch2++;
		srch++;
	}
	return (s);
}
