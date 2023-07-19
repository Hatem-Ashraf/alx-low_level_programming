#include "main.h"
/**
  * _isalpha - checks if c is a char
  * @c: char to be checked
  *
  * Return: 1 if true , 0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
