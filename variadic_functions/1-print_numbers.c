#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers seperated by seperator
 *
 *@n: amount of numbers to print
 *@separator: seperator between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", va_arg(ap, int));
		if (!separator || i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
