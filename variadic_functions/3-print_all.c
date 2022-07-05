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
	char toprint[3];
	char form;
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
			toprint[0] = '%';
		        toprint[1] = form;
			if (form == 115)
			{
				word = va_arg(ap, char*);
				if (word == NULL)
				{
					printf("(nil)");
					printf("here2\n");
					j = 0;
					break;
				}
				printf(toprint, word);
				j = 0;
				break;
			}
			printf(toprint, va_arg(ap, int));
			j = 0;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
