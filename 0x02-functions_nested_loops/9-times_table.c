#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

void times_table(void){
for(int i = 0; i <= 9; i++){
for(int j = 0; j <= 9; j++){
printf(i * j);
}
printf("\n")
}
}
