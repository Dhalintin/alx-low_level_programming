#include "main.h"

/**
*@print_chessboard: function that takes 2 parameter
*@a: array
*Prints a the values in the 2D array
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for(i = 0; i < 8; i++)
{
for(j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
