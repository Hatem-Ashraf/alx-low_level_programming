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

	for (i = 0; i < 26; i++)
	{
		if (arr[i] == 'q' || arr[i] == 'e')
		{
			continue;
		}
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
