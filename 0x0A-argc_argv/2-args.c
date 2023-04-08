#include <stdio.h>
#include <stdlib.h>

/**
*main - program prints all the vlaues of argv
*@argc: argc paramenter
*@argv: argv parameter 
*Returns: sucess
*/


int main(int argc __attribute__((unused)), char* argv[])
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i])
}
return (0);
}
