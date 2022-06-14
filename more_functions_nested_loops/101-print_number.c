/**
 *print_number - prints a number using char
 *
 *@n: number to print
 *return: void
 */
#include "main.h"
#include <math.h>

void print_number(int n)
{
	int digit;
	int pow;
	int dvalue;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		for (digit = 10; digit >= 0; digit--)
		{
			pow = pow(10, digit);
			if (n % pow != n)
			{/*example: 2345678 and digit = 3*/
				dvalue = n - (n % pow);/*1234000*/
				dvalue /= pow(10, digit);/*1234*/
				dvalue = dvalue % 10;/*4*/
				_putchar(dvalue + '0');
			}
		}
	}
	_putchar('\n');
}
