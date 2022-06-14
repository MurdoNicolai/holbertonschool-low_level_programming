#include <string.h>
#include <stdio.h>

/**
 *puts_half - prints every other caracter
 *
 *@str: string to print
 *Return: void
 */

void puts_half(char *str)
{
	int c;
	int len = strlen(str);

	for (c = (len - (len % 2)) / 2; c < len ; c ++)
		printf("%c", str[c]);
	printf("\n");
}
