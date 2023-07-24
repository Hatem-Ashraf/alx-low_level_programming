#include "main.h"

/**
  * swap_int - swaps 2 integers
  * @a: num1
  * @b: num2
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
