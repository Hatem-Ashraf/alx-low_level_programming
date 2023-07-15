#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
