#include "main.h"

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/

char *_strcpy(char *dest, char *src) {
int i = 0;
while (src[i] != '\0') {
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
