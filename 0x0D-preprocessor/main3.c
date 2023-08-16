#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;
    int k;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    k = ABS(INT_MIN);
    printf("k:%d\n", k);
    return (0);
}
