#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
