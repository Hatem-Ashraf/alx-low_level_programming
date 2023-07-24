#include "main.h"

/**
  * swap_int - swaps 2 integers
  * @a: num1
  * @b: num2
  *
  * Return: nothing
  */
void swap_int(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
