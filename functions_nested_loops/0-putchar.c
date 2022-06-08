/**
 *main - prints _putchar
 *
 *Return: always 0
 */
#include <stdio.h>
#include "main.h"
#include <string.h>

int main(void)
{
	char putchar[] ="_putchar";
	int c;

	for ( c = 0 ;c < strlen(putchar); c++){
		_putchar(putchar[c]);
	}
	_putchar('\n');
	return (0);
}
