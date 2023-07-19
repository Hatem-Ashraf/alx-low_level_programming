#include "main.h"
/**
  * print_alphabet_x10 - 10 times alpha
  *
  * Return: nothing
  */
void print_alphabet_x10(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(arr[j]);
		}
		_putchar('\n');
	}
}
