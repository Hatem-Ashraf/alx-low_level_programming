#include "main.h"

/**
  * _isdigit - checks if the param is digit
  * @c: num
  *
  * Return: 1 if it's digit, 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
