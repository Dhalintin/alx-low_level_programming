#include "main.h"

/**
*@_strcat: the function that takes the value
*@dest: and conctenate
*@src:to it
*@n: max number of bytes
*and returns the concatenated string
*/

char* _strncat(char* dest, char* src, int n)
{
int dest_len = 0;
while (dest[dest_len] != '\0') {
dest_len++;
}
int i = 0;
while (i < n && src[i] != '\0') {
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return dest;
}
