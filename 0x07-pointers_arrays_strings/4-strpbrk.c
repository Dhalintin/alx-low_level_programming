#include "main.h"

/**
*@_strpbrk: function that takes 2 parameter
*@s: string to be searched for
*@accept: string to be searched
*Returns a pointer to s or null 
*/

char *_strpbrk(char *s, char *accept)
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
if(accept[j])
{
return (s + i); 
}

return (0); 
}
