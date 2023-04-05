#include "main.h"
/**
*_pow_recursion is a function that takes
*@x: an integer to be multiplied
*@y: number of times
*Returns an integer
*/

int _pow_recursion(int x, int y)
{
int res = x;
if(y < 0)
{
return (-1);
}
if(y == 0)
{
    return (1);
}
res * _pow_recursion(x, y-1);
return (res);
}
