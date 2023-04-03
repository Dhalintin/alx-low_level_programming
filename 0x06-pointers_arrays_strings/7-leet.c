#include "main.h"
#include <string.h>

/**
*@leet:
*/
char *leet(char *str)
{
char *result[];
for(int i = 0; i < strlen(str); i++)
{
if(str[i] == 'a' || str[i] == 'A')
{
result[i] = '4';
}else if (str[i] == 'e' || str[i] == 'E')
{
result[i] = '3';

}else if (str[i] == 'o' || str[i] == 'o')
{
result[i] = '2';

}else if if(str[i] == 't' || str[i] == '')
{
result[i] = '7';

}else if if(str[i] == 'l' || str[i] == 'L')
{
result[i] = '1';git 

}
}
result[j] = '\0';
return result;

}
