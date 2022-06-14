#include <string.h>
#include <stdio.h>

/**
 *print_rev - prints the reverse of string
 *
 *@s: string to reverse
 *Return: void
 */

void print_rev(char *s)
{
	int c;

	for (c = strlen(s); c >= 0 ; c--)
		printf("%c", s[c]);
}
