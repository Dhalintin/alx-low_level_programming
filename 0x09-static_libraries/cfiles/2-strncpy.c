#include "main.h"
#include <string.h>

/**
*@_strcat: the function that takes the value
*@dest: and conctenate
*@src:to it
*@n: max number of bytes
*and returns the concatenated string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++) {
dest[i] = src[i];
}
for (; i < n; i++) {
dest[i] = '\0';
}
return dest;
}
