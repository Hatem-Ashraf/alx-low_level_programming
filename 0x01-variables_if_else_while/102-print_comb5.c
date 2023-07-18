#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
	int j, i, n, k, jI, nK;
	j = i = n = k = 0;
	
	for (jI = 0; jI < 99; jI++)
	{
		for (k = i; k < 58; k++)
		{
			compare1 = j * 10 + i;
			compare2 = n * 10 + k;
			if (compare1 != compare2)
			{
				putchar(j);
				putchar(i);
				putchar(32);
				putchar(n);
				putchar(k);
				if (i == 57 && j < 57)
				{
					j++;
					i = 48;
				}
				if (k == 57 && n < 57)
				{
					n++;
					k = 48;
				}
				if (i != 57 && j != 57 && k != 57 && n != 57)
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
