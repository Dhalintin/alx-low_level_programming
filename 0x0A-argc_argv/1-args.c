#include <stdio.h>
#include <stdlib.h>

/**
*Main - prints the number of argv
*@argc: argc paramenter
*@argv: argv parameter
*@_attribute__((unused)): used for
*Returns:0
*/

int main(int argc,  char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
