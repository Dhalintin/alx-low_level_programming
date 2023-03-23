#include "main.h"


/**
* main - check the code.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
int i, j;
if(size >= 0){
for(i = 1; i <= size; i++){
for(j = 1; j <= size; j++){
if((i + j) >= size){
_putchar('#');
}else{
_putchar(' ');
}
}
}
}
_putchar('\n');
}
