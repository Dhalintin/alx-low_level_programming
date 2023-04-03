#include "main.h"
#include <stdio.h>

/**
*@print_chessboard: function that takes 2 parameter
*@a: integer
*@size: size of array
*Prints a the values in the 2D array
*/

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 == 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
a += size;
}

a -= size;

for (i = 0; i < size; i++)
{
sum2 += a[i];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
