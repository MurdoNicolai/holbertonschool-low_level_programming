#include <string.h>
#include <stdio.h>

/**
 *puts2 - prints every other caracter
 *
 *@str: string to print
 *Return: void
 */

void puts2(char *str)
{
	int c;
	int len = strlen(str);

	for (c = 0; c < len ; c += 2)
		printf("%c", str[c]);
	printf("\n");
}
