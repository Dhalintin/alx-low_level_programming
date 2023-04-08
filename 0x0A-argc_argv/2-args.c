#include <stdio.h>
#include <stdlib.h>

/**
*This program takes
*@argc: and 
*@argv: and prints all the vlaues of argv
*Returns: sum or 1
*/


int main(int argc, char* argv())
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i])
}
return (0);
}
