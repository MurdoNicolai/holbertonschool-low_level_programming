/**
 *print_number - prints a number using char
 *
 *@n: number to print
 *return: void
 */


#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int digit;
	int power;
	int dvalue;
	int p;
	int mintest = 0;

	if (n == -2147483648)
	{
		n = -214748364;
		mintest = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		for (digit = 9; digit >= 0; digit--)
		{
			power = 1;
			for (p = 0; p < digit; p++)
				power *= 10;
			if (n % power != n)
			{/*example: 2345678 and digit = 3*/
				dvalue = n - (n % power);/*1234000*/
				dvalue /= power;/*1234*/
				dvalue = dvalue % 10;/*4*/
				_putchar(dvalue + '0');
			}
		}
		if (mintest)
			_putchar('8');
	}
}
