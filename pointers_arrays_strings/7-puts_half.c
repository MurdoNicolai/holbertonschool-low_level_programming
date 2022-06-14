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

	len = (len - (len % 2)) / 2;
	for (c = 0; c < len ; c += 2)
		printf("%c", str[c]);
	printf("\n");
}
