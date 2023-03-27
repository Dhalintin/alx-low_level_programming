#include "main.h"
#include <string.h>

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/



void puts_half(char *str) {
    int length = strlen(str);
    int start_index = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
    for (int i = start_index; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
