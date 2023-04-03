#include "main.h"

/**
*@_strchr: is the function that takes 3 parameter
*@s: string to be search
*@c: character to be searched for
*Returns dest
*/

char *_strchr(char *s, char c)
{
int i;

for(i = 0; s[i] >= '\0' i++) 
{
if(s[i] == c)
{
    return (s + c);
}
return ('\0');
}

}
