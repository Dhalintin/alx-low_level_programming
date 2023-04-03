#include "main.h"

/**
*@print_chessboard: function that takes 2 parameter
*@a: array
*Prints a the values in the 2D array
*/

void print_diagsums(int *a, int size)
{
int i, j, sum = 0;

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
printf(sum);
}
