#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
int i;
int sum = 0;

if(n === 0)
{
return (0);
}

va_start(nums, n);
for (i = 0; i < n; i++)
{
sum += va_arg(nums, int);
}
va_end(nums);

return (sum);
}