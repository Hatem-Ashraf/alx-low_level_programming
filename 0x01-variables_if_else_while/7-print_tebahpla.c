#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i > -1; i--)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
