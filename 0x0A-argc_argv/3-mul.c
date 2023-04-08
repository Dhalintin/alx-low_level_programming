#include <stdio.h>
#include <stdlib.h>

/**
*This program prints out the product of the two  numbers
*@argc: argc paramenter
*@argv: argv parameter
*Returns: sum or 1
*/
int main(int argc, char *argv[])
{
int mult;
if(argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n" mult);
return(0);
}
else 
{
printf("Error");
return (1);
}
}
