#include "main.h"

/**
*@reverse_array: the function that takes a string and reverses it
*@a: string to be reverse
*@n: the number of elements of the array
*and returns the reversed string
*/

void reverse_array(int *a, int n) {
int temp, i, j;
for (i = 0, j = n - 1; i < j; ++i, --j) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
