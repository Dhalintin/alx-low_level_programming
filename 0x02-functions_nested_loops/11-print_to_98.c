#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
void print_to_98(int n)
if(n < 98){
    for(int i = n; i <= 98; i++){
        printf(i)
    }
    printf("\n")
}else if(n > 98){
    for(int i = n; i >= 98; i--){
        printf(i)
    }
    printf("\n")
}else{
    printf("%d\n", n)
}

return (0);
}
