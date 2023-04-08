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
int a, b, mult;

if(argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);

mult = a * b;

printf("%d\n" mult);
return(0);
}
else 
{
printf("Error");
return (1);
}
}
