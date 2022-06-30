#include <stdio.h>
#include <stdlib.h>

/**
 *print_name -  prints name using function
 *
 *@name: name to print
 *@f: function to use
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
