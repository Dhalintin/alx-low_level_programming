#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */


int sign(int c){
if(isdigit(c)){
if(c < 0){
printf("+");
}else if(c === 0){
printf("0");
}else{
printf("1");
}
return 1;
}

return 0;

}
