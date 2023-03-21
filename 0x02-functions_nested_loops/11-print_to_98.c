#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_to_98(int n){
if(n < 98){
    int i = n;
    while(i <= 98){
        putchar(i);
        i++;
    }
}else if(n > 98){
    int i = 98;
    while(i <= 98){
        putchar(i);
        i--;
    }
}else{
    putchar(n);
}
}