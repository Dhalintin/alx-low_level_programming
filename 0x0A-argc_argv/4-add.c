#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*This program takes
*@argc: and 
*@argv: and sums up all the positive integer
*Returns: 0 or 1
*/


int main(int argc, char* argv[])
{
int i, sum =0;

for(i = 1; i < argc; i++)
{
if(isdigit(argv[i]))
{ 
if(argv[i] > 0)
{
sum += argv[i];
}
} else
{
printf("Error");
return (1);
}
}

printf("%d\n", sum)
return(0);
}
