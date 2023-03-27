#include "main.h"
#include <stdio.h>
/**
 * print_array - prints m elements of an array of integers
 * @a: elements
 * @n: number of elements
 */

void print_array(int *a, int n)
{
for (int i = 0; i < n; i++) {
printf("%d", a[i]);
if (i != n - 1) {
printf(", ");
}
}
printf("\n");
}
