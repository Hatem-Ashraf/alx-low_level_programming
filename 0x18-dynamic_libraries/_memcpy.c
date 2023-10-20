#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	(void) n;
	(void) src;
	return (dest);
}
char *_strchr(char *s, char c)
{
	(void) c;
	return (s);
}
unsigned int _strspn(char *s, char *accept)
{
	(void) s;
	(void) accept;
	return (1);
}
char *_strpbrk(char *s, char *accept)
{
	(void) accept;
	return (s);
}
char *_strstr(char *haystack, char *needle)
{
	(void) needle;
	return (haystack);
}
