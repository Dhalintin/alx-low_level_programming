#include "main.h"
#include <stdlib.h>

/**
* *create_array - is a function that 
*@size: size of the array
*@c: char to iniitialize the array
*Return: Pointer or Null
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;


if(size === 0)
return (NULL);


a = malloc(size * sizeof(c))

if(a == NULL)
return (NULL);


for(i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
