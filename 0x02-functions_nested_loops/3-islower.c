#include "main.h"
/**
  * _islower - check for a lower case
  * @c: char to be checked
  *
  * Return: 1 if true , 1 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
