#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description - checks for lowercase character in int c
 * @c: peremeter 'c'
 * Return: 1 or 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}