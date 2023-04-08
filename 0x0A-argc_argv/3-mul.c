#include <stdio.h>
#include <stdlib.h>

/**
*This program prints out the product of the two  numbers
*@argc: argc paramenter
*@argv: argv parameter
*Returns: sum or 1
*/
int main(int argc __attribute__((unused)), char* argv[])
{
int mult;
if(argc == 3)
{
mult = argv[1] * argv[2];
printf("%d\n" mult);
return(0);
}
else if(argc < 3)
{
printf("Error");
return (1);
}
}
