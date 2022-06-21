#include "main.h"
/**
 *_puts_recursion - like puts but recursif
 *
 *@s: string to print
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
