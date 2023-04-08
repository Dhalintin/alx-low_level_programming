#include <stdio.h>
#include <stdlib.h>

/**
*This program prints the number of argv
*@argc: argc paramenter
*@argv: argv parameter 
*Returns:0
*/


int main(int argc,  char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1 );
return (0);
}
