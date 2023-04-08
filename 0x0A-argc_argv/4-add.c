#include <stdio.h>
#include <stdlib.h>

/**
* main - adds numbers
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
*
* Return: 0 if no errors, else 1
*/
int main(int argc, char *argv[])
{
int numA, numB, sum = 0;

for (numA = 1; numA < argc; numA++)
{
for (numB = 0; argv[numA][numB]; numB++)
{
if (argv[numA][numB] < '0' || argv[numA][numB] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[numA]);
}

printf("%d\n", sum);

return (0);
}
