#include "main.h"

/**
  * _isupper - checks if the char is uppercase
  * @c: char
  *
  * Return: 1 if it's upper, 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
