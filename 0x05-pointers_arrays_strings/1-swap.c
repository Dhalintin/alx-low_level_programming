#include "main.h"
/**
*swap_int funtion takes two parameters
*@a first parameter
*@b second parameter
*and swaps them
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
