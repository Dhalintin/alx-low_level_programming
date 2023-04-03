#include "main.h"

/**
*@_strspn: is the function that takes 3 parameter
*@s: initial string
*@accept: bytes to search for
*Returns the number of bytes i or null
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for(i = 0; s[i]; i++)
{
for(j =0; accept[j]; j++)
{
if(s[i] == accept[j])
{
break;
}
}
if(!accept[j])
{
break;
}
}

return (i);
}
