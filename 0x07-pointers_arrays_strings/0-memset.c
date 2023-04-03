#include "main.h"

/**
*@_memset: is the function that takes 3 parameter
*@s: memory location
*@b: byte size
*@n: number of bytes
*Returns s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
