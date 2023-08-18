#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/**
  * struct print_format - struct used to map between a char and a function
  * @s: the char like 'c' for char or 'i' for int
  * @f: function pointer to the specific function
  *
  * Desciption: Used for mapping
  */

typedef struct print_format
{
	char *s;
	void (*f)(char *, va_list);
} st_print;

void str_format(char *, va_list);

void char_format(char *, va_list);

void int_format(char *, va_list);

void float_fomat(char *, va_list);

void print_all(const char * const format, ...);

#endif
