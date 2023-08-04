#include "main.h"
#include <string.h>

/**
  * _strstr - searches for the first occurance of a substring is the string
  * @haystack: the string
  * @needle: substring
  *
  * Return: pointer to the substring in the string
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
