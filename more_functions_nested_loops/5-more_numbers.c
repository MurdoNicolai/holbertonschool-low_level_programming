/**
 *more_numbers - prints 0 to 14 10 times
 *
 *Return: void
 */

#include "main.h"

void more_numbers(void)
{
	int n;
	int m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0; m < 15; m++)
			if (m >= 10)
				_putchar('1');
			_putchar((m % 10) + '0');
		_putchar(10);
	}
}
