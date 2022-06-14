/**
 *print_most_numbers - prints 0 to 9 not 2 or 4
 *
 *Return: void
 */

#include "main.h"

void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if ((n != 2) || (n != 4))
			_putchar(n + '0');
	}
	_putchar(10);
}
