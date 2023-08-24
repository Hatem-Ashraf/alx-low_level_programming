#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("ceiss", 'B', 3, "stSchool", NULL);
    print_all(NULL, 'B', 3, "stSchool", NULL);
    print_all("ceis", 67, 3, "stSchool", NULL);
    return (0);
}
