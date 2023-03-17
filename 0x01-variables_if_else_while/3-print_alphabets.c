#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
    char val;

    val = 'a';
    while(val <= 'z'){
        putchar(val);
    }

    val = 'A';
    while(val <= 'Z'){
        putchar(val);
    }

    printf("\n");
    
	return (0);
}