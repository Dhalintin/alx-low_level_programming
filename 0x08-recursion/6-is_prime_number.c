#include "main.h"

/**
*is_divisible is function that takes
* @n: integer
* @i: integer
* Returns if n is divisible by any value of i
*/

int is_divisible(int n, int i)
{
if (i * i > n)
return (0);


if (n % i == 0)
return (1);


return (is_divisible(n, i + 1));
}

/**
* is_prime_number: states if number is prime
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
if (n < 2)

return (0);

if (n == 2 || n == 3)

return (1);

return (!is_divisible(n, 2));
}
