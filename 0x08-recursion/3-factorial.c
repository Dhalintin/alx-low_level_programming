#include "main.h"
/**
*factorial is a function that takes
*@n: integer
* and recursively return factorial
*/


int factorial (int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}

return (n * factorial(n-1));
}
