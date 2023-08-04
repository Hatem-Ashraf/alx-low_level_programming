#include "main.h"
#include <string.h>

/**
  * _memcpy - copies from src to the dest n bytes
  * @dest: dest string
  * @src: src string
  * @n: No of bytes
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
