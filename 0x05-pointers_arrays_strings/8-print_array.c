#include "main.h"

/** This function takes a ponter n
* @*n
*and Updates the value to 98 
*/

void print_array(int *a, int n) {
for (int i = 0; i < n; i++) {
printf("%d", a[i]);
if (i != n - 1) {
printf(", ");
}
}
printf("\n");
}
