#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
    char val;

    val = 'z';
    while(val >= 'a'){
        putchar(val);
    }

    printf("\n");

	return (0);
}