#include <stdio.h>
#include <stdlib.h>

/**
*This program takes
*@argc: and 
*@argv: and prints out the product of the two  numbers
*Returns: sum or 1
*/
int main(int argc, char* argv())
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
