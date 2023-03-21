#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
void jack_bauer(void){
    int i = 0;
    int j = 0;
    while(i < 60){
        if(i < 10){
            while(j < 60){
                if(j < 10){
                    printf("0%d:0%d", i, j);
                }else{
                    printf("0%d:%d", i, j);
                } 
            }
        }else{
            while(j < 60){
                if(j < 10){
                    printf("%d:0%d", i, j);
                }else{
                    printf("%d:%d", i, j);
                } 
            }
        }
    }
}

return (0);
}
