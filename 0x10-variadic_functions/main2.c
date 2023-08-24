#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 3, NULL, "Django", NULL);
    print_strings(NULL, 3, NULL, "Django", NULL);
    return (0);
}
