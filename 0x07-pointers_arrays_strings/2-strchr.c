#include "main.h"
/**
* *_strchr - function that locates a character in a string.
* @s: string to be checkd
* @c: character to be searched for
* Return: a pointer or NULL 
*/
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
if (c == s[a])
return (s + a);
}
return ('\0');
}
