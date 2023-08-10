#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concates all args
  * @ac: args count
  * @av: args values
  *
  * Return: pointer to the created array
  */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *s = NULL;
	int counter = 0;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	s = malloc(len * sizeof(char) + 1);
	if (!s)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			s[counter++] = *(av[i] + j);
		}
		s[counter++] = '\n';
	}
	return (s);

}
