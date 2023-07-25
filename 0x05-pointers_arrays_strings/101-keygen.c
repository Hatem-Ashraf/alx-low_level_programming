#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generate random password for 101-crackme
  *
  * Return: always 0
  */
int main(void)
{
	char password[11];
	char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	password[10] = '\0';
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		password[i] = charSet[rand() % sizeof(charSet)];
	}
	printf("%s", password);
	return (0);
}
