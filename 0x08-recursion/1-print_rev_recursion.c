#include "main.h"
#include <string.h>

/**
* print_rev_recursion: is a function that takes
*@s: string
*and prints it in reverse
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
