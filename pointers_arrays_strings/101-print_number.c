/**
 *print_number - prints integer
 *
 *@n: integer to print
 *Return: void
 */
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

void print_number(int n)
{
	int i = 1000000000;
	int car;

	while (i > n && n > 0)
		i /= 10;

	while (n > 0)
	{
		car = ((n - (n % i)) / i) + 48;
		n =  n % i;
		_putchar(car);
		i /= 10;
	}
}
