#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	char arr[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
