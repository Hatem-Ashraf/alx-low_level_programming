#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
  *
  */
void zeros(int *p, int size)
{
	int *ptr = p;

	while (size--)
	{
		*ptr++ = 0;
	}
}
/**
  * 
  */
int ln (char *s)
{
	char *ch = s;
	int len = 0;
	while (*ch != '\0')
	{
		len++;
		ch++;
	}
	return (len);
}
/**
  */
void mul(char *num1, char* num2, char *res)
{
	int len1 = ln(num1);
	int len2 = ln(num2);
	int *final = malloc((len1 + len2) * sizeof(int));
	int i, j, n1, n2, prod, high, low, sum, index, finIndex;
	zeros(final, len1 + len2);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			n1 = num1[i] - '0';
			n2 = num2[j] - '0';
			prod = n1 * n2;

			high = i + j;
			low = i + j + 1;

			sum = prod + final[low];
			final[high] = sum / 10;
			final[low] = sum % 10;

		}
	}
	index = 0;
	while (index < len1 + len2 && final[index] == 0)
	{
		index++;
	}
	if (index == len1 + len2)
	{
		res[0] = '0';
		res[1] = '\0';
	} else
	{
		finIndex = 0;
		while(index < len1 + len2)
		{
			res[finIndex++] = final[index++] + '0';
		}
		res[finIndex] = '\0';
	}
	free(final);
}

/**
  */
int main(int argc, char **argv)
{
	char *n1 = argv[1];
	char *n2 = argv[2];
	char result[1000];
	int i, j;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) < 48 || *(argv[i] + j) > 57)
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				exit(98);
			}
		}
	}
	mul(n1, n2, result);
	for (i = 0; result[i] != '\0' ; i++)
	{
		_putchar(result[i]);
	}
	_putchar('\n');
	return (0);
}
