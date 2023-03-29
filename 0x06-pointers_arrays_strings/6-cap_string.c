#include <string.h>
#include "main.h"

/**
*@cap_string:string to be capitalized
*/
char *cap_string(char *str) {
int len = strlen(str);
int i;
int capitalize_next = 1; // capitalize the first character
for (i = 0; i < len; i++) {
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}') {
capitalize_next = 1;        }
else if (capitalize_next) {
if (str[i] >= 'a' && str[i] <= 'z') {
str[i] = str[i] - 'a' + 'A'; 
}
capitalize_next = 0; 
}
}
return str;
}
