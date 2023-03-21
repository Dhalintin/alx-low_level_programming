#include <stdio.h>
#include "main.c"

/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet(void){
char i = 'a';
while (i < 'z'){
putchar("\"%c", i);
}
putchar("\n");
}


