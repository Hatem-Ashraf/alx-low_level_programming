#include "main.h"
#include <string.h>
/**
  * _memset - sets a block of memory from a specific address
  * @s: the address
  * @b: the char to be stored
  * @n: the size of the block
  *
  * Return: pointer to that block
  */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
