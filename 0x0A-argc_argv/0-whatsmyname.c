#include <stdio.h>
#include <stdlib.h>

/**
*This function prints the name of the file
*@argc: argc paramenter
*@argv: argv parameter
*@_attribute__((unused)): used for
*Returns: 0
*/


int main(int argc __attribute__((unused)), char* argv[])
{
printf("%s\n", *argv);
return (0);
}
