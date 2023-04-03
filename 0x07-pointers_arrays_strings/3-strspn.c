#include "main.h"

/**
*@_strspn: is the function that takes 3 parameter
*@s: initial string
*@accept: bytes to search for
*Returns the number of bytes i or null
*/

unsigned int _strspn(char *s, char *accept)
{

for(int i = 0; s[i] >= '\0'; i++)
{
for(int j =0; accept[j]> '\0'; j++)
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
