#include "main.h"

/**
*@_strstr: function that takes 2 parameter
*@neddle: string to be searched for
*@haystack: string to be searched
*Returns a pointer to substring or null 
*/

char *_strstr(char *haystack, char *needle)
{

for(int i = 0; haystack[i] >= '\0'; i++)
{
for(int j =0; neddle[j]> '\0'; j++)
{
if(haystack[i] == neddle[j])
{
break
}
}
if(!neddle[j])
{
return (haystack + i);
}

return (0); 
}
