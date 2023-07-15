#include <stdio.h>
/**
* main - start point
*
* Return: 0
*/
int main(void)
{
        char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(arr[i]);
        }
	for (i = 26; i < 52; i++)
        {
                putchar(arr[i]);
        }
        putchar('\n');
        return (0);
}
