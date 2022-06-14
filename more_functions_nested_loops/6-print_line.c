/**
 *print_line - prints a line
 *
 *@n: length of line
 *Return: void
 */

#include "main.h"

void print_line(int n)
{
	for (; n > 0 ; n--)
	{
		_putchar('_');
	}
	_putchar(10);
}
