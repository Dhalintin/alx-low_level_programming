#include "main.h"
#include <stdio.h>

/**
*@print_chessboard: function that takes 2 parameter
*@a: array
*@size: size of array
*Prints a the values in the 2D array
*/

void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for(i = 0; i < size; i++)
{
for(j = 0; j < size; j++)
{
if(i == j){
sum += a[i][j];
break;
}
}
}

for(i = 0; i < size; i++)
{
for(j = size; j >= 0; j--)
{
if((i + j + 1) == size){
sum2 += a[i][j];
break;
}
}
}
printf("%d, %d\n", sum1, sum2);
}
