#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
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
	char toprint[5];
	char form;
	int l = 0;
	int j;
	char *word;


	va_start(ap, format);
	i = 0;
	while (i < strlen(format))
	{
		form = format[i];
		j = 1;
		while (strchr("cifs", form) && j)
/* doing if statement using a while*/
		{
			toprint[l] = '%';
		        toprint[l + 1] = form;
			if (form == 's')
			{
				word = va_arg(ap, char*);
				if (!word)
				{
					printf("(nil)");
					j = 0;
					break;
				}
				printf(toprint, word);
				j = 0;
				break;
			}
			getvalu(form % 2);
			j = 0;
			toprint[0] = ',';
		        toprint[1] = ' ';
			l = 2;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
