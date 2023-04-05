#include "main.h"

/**
*_puts_recursion - is afunction that takes
*@s: string
* print: the string  recursively
*/

void _puts_recursion(char *s)
{

if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);

}
else
{
_putchar('\n');
}
}
