#include "main.h"
#include <string.h>

/** This function takes a value
*@s
*and prints it in reverse order
*/

void print_rev(char *s)
{
int len = strlen(s);
for (int i = len - 1; i >= 0; i--) 
{
printf("%c", s[i]);
}
printf("\n");

}
