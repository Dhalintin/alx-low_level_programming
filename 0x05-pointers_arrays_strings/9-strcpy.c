#include "main.h"

/**
*This function takes a ponter n
*@_strcpy: function
*@dest: where string is copied to
@src: string is copied from
*and Updates the value to 98
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
