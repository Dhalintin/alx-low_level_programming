#include "main.h"


/**
* main - check the code.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
int i;
if(size >= 0){
for (hash = 1; hash <= size; hash++)
{
for (index = size - hash; index > 0; index--)
_putchar(' ');

for (index = 0; index < hash; index++)
_putchar('#');

if (hash == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
