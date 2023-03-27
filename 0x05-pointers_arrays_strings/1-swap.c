#include "main.h"

/** This swap_int funtion takes two parameters
*@a
*@b
*and swaps them
*/

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
