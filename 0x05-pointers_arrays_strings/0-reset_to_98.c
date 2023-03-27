#include "main.h"

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/

void reset_to_98(int *n)
{
    int *p = &n;

    *p = 98;
}
