#include "main.h"
#include <string.h>
#include <stdio.h>

/**
*This function takes a ponter n
*@str: string to be 
*and prints everyother character starting folllowed by a new line 
*/

void puts2(char *str)
{
int len = strlen(str);
for (int i = 0; i < len; i += 2) {
printf("%c", str[i]);
}
printf("\n");

}
