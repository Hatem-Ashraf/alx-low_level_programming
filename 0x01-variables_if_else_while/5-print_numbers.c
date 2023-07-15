#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	char arr[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
