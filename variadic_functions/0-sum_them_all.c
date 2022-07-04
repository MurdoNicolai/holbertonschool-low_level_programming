#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *sum_them_all - returns summ of all inputs
 *
 *@n: first input
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (n);
}
