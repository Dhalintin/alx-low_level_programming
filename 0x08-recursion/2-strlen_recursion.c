#include "main.h"
/**
*_print_rev_recursion is a function that takes
*@s: string
*and prints it's length recursively
*/

int _strlen_recursion(char *s)
{
int num = 0;

if(*s == "\0")
{
return num;
}

++num;
return _strlen_recursion(s + 1);
}
