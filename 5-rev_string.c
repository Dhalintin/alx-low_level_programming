#include "main.h"

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/

void rev_string(char *s)
{
    int len = strlen(*s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

}