#include "main.h"

/**
* _sqrt_recursion: a function that take
*@n: integer  value
*
*Return: natural square root or -1
*_perfect_square: finds the perfect square
*@i: integer value
*/

int _perfect_square(int i, int n)
{
if ((i * i) == n)
{
return (i);
}
else if ((i * i) > n )
{
return (-1);
} else {
return (_perfect_square(i + 1, n));
}

}
int _sqrt_recursion(int n)
{

if (n == 0)

return (0);


return (_perfect_square(1, n));
}
