#include "main.h"

/**
*@_strstr: function that takes 2 parameter
*@neddle: string to be searched for
*@haystack: string to be searched
*Returns a pointer to substring or null 
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, a = 0;

while (haystack[i])
{
while (needle[a] && (haystack[i] == needle[0]))
{
if (haystack[i + a] == needle[a])
a++;
else
break;
}
if (needle[a])
{
i++;
a = 0;
}
else
return (haystack + i);
}
return (0);

}
