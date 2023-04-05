#include "main.h"
/**
*_print_rev_recursion is a function that takes
*@s: string
*and prints it's length recursively
*/

int _strlen_recursion(char *s)
{
int length = 0;

if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}

return (length);
}
