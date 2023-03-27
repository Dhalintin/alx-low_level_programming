#include "main.h"

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
