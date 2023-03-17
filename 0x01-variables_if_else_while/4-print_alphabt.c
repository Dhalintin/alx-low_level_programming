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
        if(val != 'q' || val != 'e'){
            putchar(val);
        }
    }

    val = 'A';
    while(val <= 'Z'){
        if(val != 'Q' || val != 'E'){
            putchar(val);
        }
    }

    printf("\n");
    
	return (0);
}