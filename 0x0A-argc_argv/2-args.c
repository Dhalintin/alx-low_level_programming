#include <stdio.h>
#include <stdlib.h>

/**
*This program prints all the vlaues of argv
*@argc: argc paramenter
*@argv: argv parameter 
*Returns: sum or 1
*/


int main(int argc __attribute__((unused)), char* argv())
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i])
}
return (0);
}
