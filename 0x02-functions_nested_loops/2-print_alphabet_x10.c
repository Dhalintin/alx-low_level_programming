#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void){
int i = 0;

while (i <= 10){

char charc = 'a';
while (charc < 'z'){
putchar(i);
}
putchar("\n");
}

}