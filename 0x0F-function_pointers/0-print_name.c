#include "function_pointers.h"
/**
  * print_name - calls a funtion to print the name
  * @name: string
  * @f: function pointer
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
