#include <stdio.h>

/**
* main - Finds and prints the largest prime
*        factor of the number 612852475143.
*
* Return: Always 0.
*/
int main(void)
{
long prime = 612852475143, div;

for (div = 2; div < (prime / 2); div += 1)
{
if ((prime % div) == 0)
prime /= div;
}


printf("%ld\n", prime);

return (0);
}
