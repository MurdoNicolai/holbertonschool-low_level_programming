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
	int j;
	char *word;


	va_start(ap, format);
	toprint[0] = 7;
	toprint[1] = 7;
	i = 0;
	while (i < strlen(format))
	{
		form = format[i];
		j = 1;
		while (strchr("cifs", form) && j)
/* doing if statement using a while*/
		{
			toprint[2] = '%';
		        toprint[3] = form;
			if (form == 's')
			{
				word = va_arg(ap, char*);
				if (word == NULL)
				{
					printf("(nil)");
					j = 0;
					break;
				}
				printf(toprint, word);
				j = 0;
				break;
			}
			printf(toprint, getvalu(form));
			j = 0;
			toprint[0] = ',';
		        toprint[1] = ' ';
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
