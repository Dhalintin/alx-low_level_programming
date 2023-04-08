#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*This program sums up all the positive integer
*@argc: argc paramenter
*@argv: argv parameter 
*Returns: 0 or 1
*/


int main(int argc __attribute__((unused)), char* argv[])
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
