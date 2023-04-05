#include "main.h"
/**
*strlen_recursion: is a function that takes
*@s: string
*Return: length
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
