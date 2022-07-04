#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 *print_all - prints list in any format
 *
 *@format: list of formats to print
 *Return: void
 */


void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *toprint;
	char form;

	va_start(ap, format);
	for (i = 0; i < strlen(format); i++)
	{
		form = format[i];
		if (strchr("cifs", form))
		{
			toprint = "%";
			strncat(toprint, &form, 1);
			if (form == "s")
				printf("(nil)");
			else
				printf(toprint, va_arg(ap, char*));
		}
	}
	va_end(ap);
	putchar('\n');
}
